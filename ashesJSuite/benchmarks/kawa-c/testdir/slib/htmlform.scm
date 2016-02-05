;;; "htmlform.scm" Generate HTML 2.0 forms and		-*-scheme-*-
;;;  service CGI requests from RDB command table.
; Copyright 1997 Aubrey Jaffer
;
;Permission to copy this software, to redistribute it, and to use it
;for any purpose is granted, subject to the following restrictions and
;understandings.
;
;1.  Any copy made of this software must include this copyright notice
;in full.
;
;2.  I have made no warrantee or representation that the operation of
;this software will be error-free, and I am under no obligation to
;provide any services, by way of maintenance, update, or otherwise.
;
;3.  In conjunction with products arising from the use of this
;material, there shall be no use of my name in any advertising,
;promotional, or sales literature without prior written consent in
;each case.

(require 'sort)
(require 'printf)
(require 'parameters)
(require 'dynamic-wind)
(require 'string-search)
(require 'database-utilities)
(require 'common-list-functions)

(define (html:text-subst txt trans-alist)
  (if (symbol? txt) (set! txt (symbol->string txt)))
  (for-each (lambda (pr)
	      (define (sub str)
		(cond ((equal? "" str) str)
		      ((string-index str (car pr))
		       => (lambda (idx)
			    (string-append
			     (substring str 0 idx)
			     (cadr pr)
			     (sub (substring
				   str (+ 1 idx) (string-length str))))))
		      (else str)))
	      (set! txt (sub txt)))
	    trans-alist)
  txt)

(define (html:atval txt)		; attribute-value
  (html:text-subst
   txt
   '((#\& "&amp;")
     (#\" "&quot;")
     (#\< "&lt;")
     (#\> "&gt;"))))

(define (html:plain txt)		; plain-text `Data Characters'
  (html:text-subst
   txt
   '((#\& "&amp;")
     (#\< "&lt;")
     (#\> "&gt;"))))

(define (html:comment . lines)
  (printf "<!")
  (for-each (lambda (line)
	      (if (substring? "--" line)
		  (slib:error 'html:comment "line contains --" line)
		  (printf "--%s--\\n" line)))
	    lines)
  (printf ">\\n"))

(define (html:dt-strong-doc name doc)
  (if (and (string? doc) (not (equal? "" doc)))
      (printf "<DT><STRONG>%s</STRONG> (%s)\\n"
	      (html:plain name) (html:plain doc))
      (printf "<DT><STRONG>%s</STRONG>\\n" (html:plain name))))

(define (html:checkbox name doc pname)
  (printf "<DT><INPUT TYPE=CHECKBOX NAME=%#a VALUE=T>\\n" (html:atval pname))
  (if (and (string? doc) (not (equal? "" doc)))
      (printf "<DD><STRONG>%s</STRONG> (%s)\\n"
	      (html:plain name) (html:plain doc))
      (printf "<DD><STRONG>%s</STRONG>\\n" (html:plain name))))

(define (html:text name doc pname default)
  (cond (default
	  (html:dt-strong-doc name doc)
	  (printf "<DD><INPUT NAME=%#a SIZE=%d VALUE=%#a>\\n"
		  (html:atval pname)
		  (max 20 (string-length (if (symbol? default)
					     (symbol->string default) default)))
		  (html:atval default)))
	(else
	 (html:dt-strong-doc name doc)
	 (printf "<DD><INPUT NAME=%#a>\\n" (html:atval pname)))))

(define (html:text-area name doc pname default-list)
  (html:dt-strong-doc name doc)
  (printf "<DD><TEXTAREA NAME=%#a ROWS=%d COLS=%d>\\n"
	  (html:atval pname) (max 2 (length default-list))
	  (apply max 32 (map (lambda (d) (string-length
					  (if (symbol? d)
					      (symbol->string d)
					      d)))
			     default-list)))
  (for-each (lambda (line) (printf "%s\\n" (html:plain line))) default-list)
  (printf "</TEXTAREA>\\n"))

(define (html:s<? s1 s2)
  (if (and (number? s1) (number? s2))
      (< s1 s2)
      (string<? (if (symbol? s1) (symbol->string s1) s1)
		(if (symbol? s2) (symbol->string s2) s2))))

(define (html:select name doc pname arity default-list value-list)
  (set! value-list (sort! value-list html:s<?))
  (html:dt-strong-doc name doc)
  (printf "<DD><SELECT NAME=%#a SIZE=%d%s>\\n"
	  (html:atval pname)
	  (case arity
	    ((single optional) 1)
	    ((nary nary1) 5))
	  (case arity
	    ((nary nary1) " MULTIPLE")
	    (else "")))
  (for-each (lambda (value)
	      (printf "<OPTION VALUE=%#a%s>%s\\n"
		      (html:atval value)
		      (if (member value default-list)
			  " SELECTED" "")
		      (html:plain value)))
	    (case arity
	      ((optional nary) (cons (string->symbol "") value-list))
	      (else value-list)))
  (printf "</SELECT>\\n"))

(define (html:buttons name doc pname arity default-list value-list)
  (set! value-list (sort! value-list html:s<?))
  (html:dt-strong-doc name doc)
  (printf "<DD><MENU>")
  (case arity
    ((single optional)
     (for-each (lambda (value)
		 (printf "<LI><INPUT TYPE=RADIO NAME=%#a VALUE=%#a%s> %s\\n"
			 (html:atval pname) (html:atval value)
			 (if (member value default-list) " CHECKED" "")
			 (html:plain value)))
	       value-list))
    ((nary nary1)
     (for-each (lambda (value)
		 (printf "<LI><INPUT TYPE=CHECKBOX NAME=%#a VALUE=%#a%s> %s\\n"
			 (html:atval pname) (html:atval value)
			 (if (member value default-list) " CHECKED" "")
			 (html:plain value)))
	       value-list)))
  (printf "</MENU>"))

(define (html:start-form method action)
  (cond ((not (memq method '(get post)))
	 (slib:error 'html:start-form "method unknown:" method)))
  (printf "<FORM METHOD=%#a ACTION=%#a>\\n"
	  (html:atval method) (html:atval action))
  (printf "<DL>\\n"))

(define (html:end-form pname submit-label)
  (printf "</DL>\\n")
  (printf "<INPUT TYPE=SUBMIT NAME=%#a VALUE=%#a> <INPUT TYPE=RESET>\\n"
	  (html:atval '*command*) (html:atval submit-label))
  (printf "</FORM><HR>\\n"))

(define (html:start-page title)
  (printf "<!DOCTYPE HTML PUBLIC \"-//IETF//DTD HTML 2.0//EN\">\\n")
  (html:comment)
  (printf "<HEAD><TITLE>%s</TITLE></HEAD>\\n" (html:plain title))
  (printf "<BODY><H1>%s</H1>\\n" (html:plain title)))

(define (html:end-page)
  (printf "</BODY>\\n"))

(define (html:generate-form comname cgi-path docu pnames docs aliases
			    arities types default-lists value-lists)
  (define aliast (map list pnames))
  (for-each (lambda (alias) (if (> (string-length (car alias)) 1)
				(let ((apr (assq (cadr alias) aliast)))
				  (set-cdr! apr (cons (car alias) (cdr apr))))))
	    aliases)
  (dynamic-wind
   (lambda ()
     (printf "<H2>%s:</H2><BLOCKQUOTE>%s</BLOCKQUOTE>\\n"
	     (html:plain comname) (html:plain docu))
     (html:start-form 'post cgi-path))
   (lambda ()
     (for-each
      (lambda (pname doc aliat arity default-list value-list)
	(define longname
	  (remove-if (lambda (s) (= 1 (string-length s))) (cdr aliat)))
	(set! longname (if (null? longname) #f (car longname)))
	(cond (longname
	       (case (length value-list)
		 ((0) (case arity
			((boolean) (html:checkbox longname doc pname 'Y))
			((single optional)
			 (html:text longname doc pname
				    (if (null? default-list)
					#f (car default-list))))
			(else
			 (html:text-area longname doc pname default-list))))
		 ((1) (html:checkbox longname doc pname (car value-list)))
		 (else ((case arity
			  ((single optional) html:select)
			  (else html:buttons))
			longname doc pname arity default-list value-list))))))
      pnames docs aliast arities default-lists value-lists))
   (lambda ()
     (html:end-form comname comname))))

(define (commands->html rdb command-table cgi-path . args)
  (define rdb-open (rdb 'open-table))
  (define (row-refer idx) (lambda (row) (list-ref row idx)))
  (let ((comtab (rdb-open command-table #f))
	(domain->type ((rdb-open '*domains-data* #f) 'get 'type-id))
	(get-domain-choices
	 (let ((for-tab-name
		((rdb-open '*domains-data* #f) 'get 'foreign-table)))
	   (lambda (domain-name)
	     (define tab-name (for-tab-name domain-name))
	     (if tab-name
		 (do ((dlst (((rdb-open tab-name #f) 'get* 1)) (cdr dlst))
		      (out '() (if (member (car dlst) (cdr dlst))
				   out (cons (car dlst) out))))
		     ((null? dlst) out))
		 '())))))
    (define row-ref
      (let ((names (comtab 'column-names)))
	(lambda (row name) (list-ref row (position name names)))))
    (for-each
     (lambda (comname)
       (let* ((command:row ((comtab 'row:retrieve) comname))
	      (parameter-table (rdb-open (row-ref command:row 'parameters) #f))
	      (pcnames (parameter-table 'column-names))
	      (param-rows (sort! ((parameter-table 'row:retrieve*))
				 (lambda (r1 r2) (< (car r1) (car r2))))))
	 (let ((domains (map (row-refer (position 'domain pcnames)) param-rows))
	       (parameter-names
		(rdb-open (row-ref command:row 'parameter-names) #f)))
	   (html:generate-form
	    comname
	    cgi-path
	    (row-ref command:row 'documentation)
	    (map (row-refer (position 'name pcnames)) param-rows)
	    (map (row-refer (position 'documentation pcnames)) param-rows)
	    (map list ((parameter-names 'get* 'name))
		 (map (parameter-table 'get 'name)
		      ((parameter-names 'get* 'parameter-index))))
	    (map (row-refer (position 'arity pcnames)) param-rows)
	    (map domain->type domains)
	    (map cdr (fill-empty-parameters
		      (map slib:eval
			   (map (row-refer (position 'defaulter pcnames))
				param-rows))
		      (make-parameter-list
		       (map (row-refer (position 'name pcnames)) param-rows))))
	    (map get-domain-choices domains)))))
     (if (null? args)
	 ((comtab 'get* 1) (lambda (key) (not (eq? '*initialize* key))))
	 args))))

;;;; Now that we have generated the HTML form, process the ensuing CGI request.

(define (cgi:read-query-string)
  (define request-method (getenv "REQUEST_METHOD"))
  (cond ((and request-method (string-ci=? "GET" request-method))
	 (getenv "QUERY_STRING"))
	((and request-method (string-ci=? "POST" request-method))
	 (let ((content-length (getenv "CONTENT_LENGTH")))
	   (and content-length
		(set! content-length (string->number content-length)))
	   (and content-length
		(let ((str (make-string content-length #\ )))
		  (do ((idx 0 (+ idx 1))
		       (chr (read-char) (read-char)))
		      ((or (>= idx content-length) (eof-object? chr))
		       (if (>= idx content-length) str (substring str 0 idx)))
		    (string-set! str idx chr))))))
	(else #f)))

(define (cgi:process-% str)
  (define nl (string #\newline))
  (define len (string-length str))
  (define (sub str)
    (cond
     ((string-index str #\%)
      => (lambda (idx)
	   (if (and (< (+ 2 idx) len)
		    (string->number (substring str (+ 1 idx) (+ 2 idx)) 16)
		    (string->number (substring str (+ 2 idx) (+ 3 idx)) 16))
	       (string-append
		(substring str 0 idx)
		(string (integer->char
			 (string->number
			  (substring str (+ 1 idx) (+ 3 idx))
			  16)))
		(sub (substring str (+ 3 idx) (string-length str)))))))
     (else str)))
  (sub str))

(define (form:split-lines txt)
  (let ((idx (string-index txt #\newline))
	(carriage-return (integer->char #xd)))
    (if idx
	(cons (substring txt 0
			 (if (and (positive? idx)
				  (char=? carriage-return
					  (string-ref txt (+ -1 idx))))
			     (+ -1 idx)
			     idx))
	      (form:split-lines
	       (substring txt (+ 1 idx) (string-length txt))))
	(list txt))))

(define (form-urlencoded->cgi-alist txt)
  (set! txt (html:text-subst txt
			     '((#\  "")
			       (#\+ " "))))
  (do ((lst '())
       (edx (string-index txt #\=)
	    (string-index txt #\=)))
      ((not edx) lst)
    (let* ((rxt (substring txt (+ 1 edx) (string-length txt)))
	   (adx (string-index rxt #\&))
	   (name (cgi:process-% (substring txt 0 edx))))
      (set!
       lst (append
	    lst
	    (map
	     (lambda (value) (list (string->symbol name)
				   (if (equal? "" value) #f value)))
	     (form:split-lines
	      (cgi:process-% (substring rxt 0 (or adx (string-length rxt))))))))
      (set! txt (if adx (substring rxt (+ 1 adx) (string-length rxt)) "")))))

(define (cgi-alist->parameter-list alist optnames arities types)
  (define (can-take-arg? opt)
    (not (eq? (list-ref arities (position opt optnames)) 'boolean)))
  (define (coerce-val val curopt)
    (define ntyp (list-ref types (position curopt optnames)))
    (case ntyp
      ((expression) val)
      (else (coerce val ntyp))))
  (let ((parameter-list (make-parameter-list optnames)))
    (for-each
     (lambda (lst)
       (let* ((value (cadr lst))
	      (name (car lst)))
	 (cond ((not (can-take-arg? name))
		(adjoin-parameters! parameter-list (list name #t)))
	       (value
		(adjoin-parameters! parameter-list
				    (list name (coerce-val value name)))))))
     alist)
    parameter-list))

(define (cgi:serve-command rdb command-table)
  (let* ((alist (form-urlencoded->cgi-alist (cgi:read-query-string)))
	 (comname #f)
	 (comtab ((rdb 'open-table) command-table #f))
	 (names (comtab 'column-names))
	 (row-ref (lambda (row name) (list-ref row (position name names))))
	 (comgetrow (comtab 'row:retrieve)))
    (set! alist (remove-if (lambda (elt)
			     (cond ((not (and (list? elt) (pair? elt)
					      (eq? '*command* (car elt)))) #f)
				   (comname
				    (slib:error
				     'cgi:serve-command
				     'more-than-one-command? comname
				     (string->symbol (cadr elt))))
				   (else (set! comname
					       (string->symbol (cadr elt)))
					 #t)))
			   alist))
    (let* ((command:row (comgetrow comname))
	   (parameter-table ((rdb 'open-table)
			     (row-ref command:row 'parameters) #f))
	   (parameter-names
	    ((rdb 'open-table) (row-ref command:row 'parameter-names) #f))
	   (comval ((slib:eval (row-ref command:row 'procedure)) rdb))
	   (options ((parameter-table 'get* 'name)))
	   (positions ((parameter-table 'get* 'index)))
	   (arities ((parameter-table 'get* 'arity)))
	   (defaulters (map slib:eval ((parameter-table 'get* 'defaulter))))
	   (domains ((parameter-table 'get* 'domain)))
	   (types (map (((rdb 'open-table) '*domains-data* #f) 'get 'type-id)
		       domains))
	   (dirs (map (rdb 'domain-checker) domains)))

      (let* ((params (cgi-alist->parameter-list alist options arities types))
	     (fparams (fill-empty-parameters defaulters params)))
	(and (list? params) (check-parameters dirs fparams)
	     (comval fparams))))))
