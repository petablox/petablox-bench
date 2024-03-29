;;"comlist.scm" Implementation of COMMON LISP list functions for Scheme
; Copyright (C) 1991, 1993, 1995 Aubrey Jaffer.
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

;;; Some of these functions may be already defined in your Scheme.
;;; Comment out those definitions for functions which are already defined.

;;;; LIST FUNCTIONS FROM COMMON LISP

;;;From: hugh@ear.mit.edu (Hugh Secker-Walker)
(define (comlist:make-list k . init)
  (set! init (if (pair? init) (car init)))
  (do ((k k (+ -1 k))
       (result '() (cons init result)))
      ((<= k 0) result)))

(define (comlist:copy-list lst) (append lst '()))

(define (comlist:adjoin e l) (if (memq e l) l (cons e l)))

(define (comlist:union l1 l2)
  (cond ((null? l1) l2)
	((null? l2) l1)
	(else (comlist:union (cdr l1) (comlist:adjoin (car l1) l2)))))

(define (comlist:intersection l1 l2)
  (cond ((null? l1) l1)
	((null? l2) l2)
	((memv (car l1) l2) (cons (car l1) (comlist:intersection (cdr l1) l2)))
	(else (comlist:intersection (cdr l1) l2))))

(define (comlist:set-difference l1 l2)
  (cond ((null? l1) l1)
	((memv (car l1) l2) (comlist:set-difference (cdr l1) l2))
	(else (cons (car l1) (comlist:set-difference (cdr l1) l2)))))

(define (comlist:position obj lst)
  (letrec ((pos (lambda (n lst)
		  (cond ((null? lst) #f)
			((eqv? obj (car lst)) n)
			(else (pos (+ 1 n) (cdr lst)))))))
    (pos 0 lst)))

(define (comlist:reduce-init p init l)
  (if (null? l)
      init
      (comlist:reduce-init p (p init (car l)) (cdr l))))

(define (comlist:reduce p l)
  (cond ((null? l) l)
	((null? (cdr l)) (car l))
	(else (comlist:reduce-init p (car l) (cdr l)))))

(define (comlist:some pred l . rest)
  (cond ((null? rest)
	 (let mapf ((l l))
	   (and (not (null? l))
		(or (pred (car l)) (mapf (cdr l))))))
	(else (let mapf ((l l) (rest rest))
		(and (not (null? l))
		     (or (apply pred (car l) (map car rest))
			 (mapf (cdr l) (map cdr rest))))))))

(define (comlist:every pred l . rest)
  (cond ((null? rest)
	 (let mapf ((l l))
	   (or (null? l)
	       (and (pred (car l)) (mapf (cdr l))))))
	(else (let mapf ((l l) (rest rest))
		(or (null? l)
		    (and (apply pred (car l) (map car rest))
			 (mapf (cdr l) (map cdr rest))))))))

(define (comlist:notany pred . ls) (not (apply comlist:some pred ls)))

(define (comlist:notevery pred . ls) (not (apply comlist:every pred ls)))

(define (comlist:find-if t l)
  (cond ((null? l) #f)
	((t (car l)) (car l))
	(else (comlist:find-if t (cdr l)))))

(define (comlist:member-if t l)
  (cond ((null? l) #f)
	((t (car l)) l)
	(else (comlist:member-if t (cdr l)))))

(define (comlist:remove p l)
  (cond ((null? l) l)
	((eqv? p (car l)) (comlist:remove p (cdr l)))
	(else (cons (car l) (comlist:remove p (cdr l))))))

(define (comlist:remove-if p l)
  (cond ((null? l) l)
	((p (car l)) (comlist:remove-if p (cdr l)))
	(else (cons (car l) (comlist:remove-if p (cdr l))))))

(define (comlist:remove-if-not p l)
  (cond ((null? l) l)
	((p (car l)) (cons (car l) (comlist:remove-if-not p (cdr l))))
	(else (comlist:remove-if-not p (cdr l)))))

(define comlist:nconc
  (if (provided? 'rev2-procedures) append!
      (lambda args
	(cond ((null? args) '())
	      ((null? (cdr args)) (car args))
	      ((null? (car args)) (apply comlist:nconc (cdr args)))
	      (else
	       (set-cdr! (last-pair (car args))
			 (apply comlist:nconc (cdr args)))
	       (car args))))))

;;;From: hugh@ear.mit.edu (Hugh Secker-Walker)
(define (comlist:nreverse rev-it)
;;; Reverse order of elements of LIST by mutating cdrs.
  (cond ((null? rev-it) rev-it)
	((not (list? rev-it))
	 (slib:error "nreverse: Not a list in arg1" rev-it))
	(else (do ((reved '() rev-it)
		   (rev-cdr (cdr rev-it) (cdr rev-cdr))
		   (rev-it rev-it rev-cdr))
		  ((begin (set-cdr! rev-it reved) (null? rev-cdr)) rev-it)))))

(define (comlist:last lst n)
  (comlist:nthcdr (- (length lst) n) lst))

(define (comlist:butlast lst n)
  (letrec ((l (- (length lst) n))
	   (bl (lambda (lst n)
		 (cond ((null? lst) lst)
		       ((positive? n)
			(cons (car lst) (bl (cdr lst) (+ -1 n))))
		       (else '())))))
    (bl lst (if (negative? n)
		(slib:error "negative argument to butlast" n)
		l))))

(define (comlist:nthcdr n lst)
  (if (zero? n) lst (comlist:nthcdr (+ -1 n) (cdr lst))))

(define (comlist:butnthcdr n lst)
  (letrec ((bn (lambda (lst n)
		 (cond ((null? lst) lst)
		       ((positive? n)
			(cons (car lst) (bn (cdr lst) (+ -1 n))))
		       (else '())))))
    (bn lst (if (negative? n)
		(slib:error "negative argument to butnthcdr" n)
		n))))

;;;; CONDITIONALS

(define (comlist:and? . args)
  (cond ((null? args) #t)
	((car args) (apply comlist:and? (cdr args)))
	(else #f)))

(define (comlist:or? . args)
  (cond ((null? args) #f)
	((car args) #t)
	(else (apply comlist:or? (cdr args)))))

; Checks to see if a list has any duplicates.
(define (comlist:has-duplicates? lst)
  (cond ((null? lst) #f)
	((member (car lst) (cdr lst)) #t)
	(else (comlist:has-duplicates? (cdr lst)))))

(define (comlist:list* x . y)	
  (define (list*1 x)
    (if (null? (cdr x))
	(car x)
	(cons (car x) (list*1 (cdr x)))))
  (if (null? y)
      x
      (cons x (list*1 y))))

(define (comlist:atom? a)
  (not (pair? a)))

(define (type-of obj)
  (cond
   ((null? obj)		'null)
   ((boolean? obj)	'boolean)
   ((char? obj)		'char)
   ((number? obj)	'number)
   ((string? obj)	'string)
   ((symbol? obj)	'symbol)
   ((input-port? obj)	'port)
   ((output-port? obj)	'port)
   ((procedure? obj)	'procedure)
   ((eof-object? obj)	'eof-object)
   ((list? obj)		'list)
   ((pair? obj)		'pair)
   ((and (provided? 'array) (array? obj))	'array)
   ((and (provided? 'record) (record? obj))	'record)
   ((vector? obj)	'vector)
   (else		'?)))

(define (coerce obj result-type)
  (define (err) (slib:error 'coerce "couldn't" obj '-> result-type))
  (define obj-type (type-of obj))
  (cond
   ((eq? obj-type result-type) obj)
   (else
    (case obj-type
      ((char)   (case result-type
		  ((number integer) (char->integer obj))
		  ((string) (string obj))
		  ((symbol) (string->symbol (string obj)))
		  ((list)   (list obj))
		  ((vector) (vector obj))
		  (else     (err))))
      ((number) (case result-type
		  ((char)   (integer->char obj))
		  ((atom)   obj)
		  ((integer) obj)
		  ((string) (number->string obj))
		  ((symbol) (string->symbol (number->string obj)))
		  ((list)   (string->list (number->string obj)))
		  ((vector) (list->vector (string->list (number->string obj))))
		  (else     (err))))
      ((string) (case result-type
		  ((char)   (if (= 1 (string-length obj)) (string-ref obj 0)
				(err)))
		  ((atom)   (or (string->number obj) (string->symbol obj)))
		  ((number integer) (or (string->number obj) (err)))
		  ((symbol) (string->symbol obj))
		  ((list)   (string->list obj))
		  ((vector) (list->vector (string->list obj)))
		  (else     (err))))
      ((symbol) (case result-type
		  ((char)   (coerce (symbol->string obj) 'char))
		  ((number integer) (coerce (symbol->string obj) 'number))
		  ((string) (symbol->string obj))
		  ((atom)   obj)
		  ((list)   (string->list (symbol->string obj)))
		  ((vector) (list->vector (string->list (symbol->string obj))))
		  (else     (err))))
      ((list)   (case result-type
		  ((char)   (if (and (= 1 (length obj))
				     (char? (car obj)))
				(car obj)
				(err)))
		  ((number integer)
		   (or (string->number (list->string obj)) (err)))
		  ((string) (list->string obj))
		  ((symbol) (string->symbol (list->string obj)))
		  ((vector) (list->vector obj))
		  (else     (err))))
      ((vector) (case result-type
		  ((char)   (if (and (= 1 (vector-length obj))
				     (char? (vector-ref obj 0)))
				(vector-ref obj 0)
				(err)))
		  ((number integer)
		   (or (string->number (coerce obj string)) (err)))
		  ((string) (list->string (vector->list obj)))
		  ((symbol) (string->symbol (coerce obj string)))
		  ((list)   (list->vector obj))
		  (else     (err))))
      (else (err))))))

(define (comlist:delete obj list)
  (let delete ((list list))
    (cond ((null? list) '())
	  ((equal? obj (car list)) (delete (cdr list)))
	  (else
	   (set-cdr! list (delete (cdr list)))
	   list)))) 

(define (comlist:delete-if pred list)
  (let delete-if ((list list))
    (cond ((null? list) '())
	  ((pred (car list)) (delete-if (cdr list)))
	  (else
	   (set-cdr! list (delete-if (cdr list)))
	   list)))) 

(define (comlist:delete-if-not pred list)
  (let delete-if ((list list))
    (cond ((null? list) '())
	  ((not (pred (car list))) (delete-if (cdr list)))
	  (else
	   (set-cdr! list (delete-if (cdr list)))
	   list)))) 

;;; exports

(define make-list comlist:make-list)
(define copy-list comlist:copy-list)
(define adjoin comlist:adjoin)
(define union comlist:union)
(define intersection comlist:intersection)
(define set-difference comlist:set-difference)
(define position comlist:position)
(define reduce-init comlist:reduce-init)
(define reduce comlist:reduce) ; reduce is also in collect.scm
(define some comlist:some)
(define every comlist:every)
(define notevery comlist:notevery)
(define notany comlist:notany)
(define find-if comlist:find-if)
(define member-if comlist:member-if)
(define remove comlist:remove)
(define remove-if comlist:remove-if)
(define remove-if-not comlist:remove-if-not)
(define nconc comlist:nconc)
(define nreverse comlist:nreverse)
(define last comlist:last)
(define butlast comlist:butlast)
(define nthcdr comlist:nthcdr)
(define butnthcdr comlist:butnthcdr)
(define and? comlist:and?)
(define or? comlist:or?)
(define has-duplicates? comlist:has-duplicates?)

(define delete-if-not comlist:delete-if-not)
(define delete-if comlist:delete-if)
(define delete comlist:delete)
(define comlist:atom comlist:atom?)
(define atom comlist:atom?)
(define atom? comlist:atom?)
(define list* comlist:list*)
