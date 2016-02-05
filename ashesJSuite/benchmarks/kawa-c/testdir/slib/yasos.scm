; "YASOS.scm" Yet Another Scheme Object System
; COPYRIGHT (c) Kenneth Dickey 1992
;
;		This software may be used for any purpose whatever
;               without warrantee of any kind.
; DATE		1992 March 1
; LAST UPDATED	1992 September 1 -- misc optimizations
;		1992 May 22  -- added SET and SETTER

;; REQUIRES     R^4RS Syntax System

;; NOTES: A simple object system for Scheme based on the paper by
;; Norman Adams and Jonathan Rees: "Object Oriented Programming in
;; Scheme", Proceedings of the 1988 ACM Conference on LISP and Functional
;; Programming, July 1988 [ACM #552880].
;
;; Setters use space for speed {extra conses for O(1) lookup}.


;;
;; INTERFACE:
;;
;; (DEFINE-OPERATION (opname self arg ...) default-body)
;;
;; (DEFINE-PREDICATE opname)
;;
;; (OBJECT ((name self arg ...) body) ... )
;;
;; (OBJECT-WITH-ANCESTORS ( (ancestor1 init1) ...) operation ...)
;;
;; in an operation {a.k.a. send-to-super}
;;   (OPERATE-AS component operation self arg ...)
;;

;; (SET var new-vale) or (SET (access-proc index ...) new-value)
;;
;; (SETTER access-proc) -> setter-proc
;; (DEFINE-ACCESS-OPERATION getter-name) -> operation
;; (ADD-SETTER getter setter) ;; setter is a Scheme proc
;; (REMOVE-SETTER-FOR getter)
;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;; IMPLEMENTATION ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; INSTANCES

; (define-predicate instance?)
; (define (make-instance dispatcher)
;    (object
;	((instance?  self) #t)
;       ((instance-dispatcher self) dispatcher)
; )  )

(define yasos:make-instance 'bogus)  ;; defined below
(define yasos:instance?     'bogus)
(define-syntax yasos:instance-dispatcher  ;; alias so compiler can inline for speed
   (syntax-rules () ((yasos:instance-dispatcher inst) (cdr inst)))
)

(let ( (instance-tag "instance") ) ;; Make a unique tag within a local scope.
				   ;; No other data object is EQ? to this tag.
  (set! yasos:make-instance
     (lambda (dispatcher) (cons instance-tag dispatcher)))

  (set! yasos:instance?
     (lambda (obj) (and (pair? obj) (eq? (car obj) instance-tag))))
)

;; DEFINE-OPERATION


(define-syntax define-operation
  (syntax-rules ()
    ((define-operation (<name> <inst> <arg> ...) <exp1> <exp2> ...)
     ;;=>
     (define <name>
       (letrec ( (former-inst #f) ;; simple caching -- for loops
		 (former-method #f)
		 (self
		  (lambda (<inst> <arg> ...)
		     (cond
		       ((eq? <inst> former-inst) ; check cache
			(former-method <inst> <arg> ...)
		       )
		       ((and (yasos:instance? <inst>)
			     ((yasos:instance-dispatcher <inst>) self))
			  => (lambda (method)
				(set! former-inst <inst>)
				(set! former-method method)
				(method <inst> <arg> ...))
		       )
		       (else <exp1> <exp2> ...)
	       ) ) )  )
	self)
  ))
  ((define-operation (<name> <inst> <arg> ...) ) ;; no body
   ;;=>
   (define-operation (<name> <inst> <arg> ...)
     (slib:error "Operation not handled"
		 '<name>
		 (format #f (if (yasos:instance? <inst>) "#<INSTANCE>" "~s")
			 <inst>)))
  ))
)



;; DEFINE-PREDICATE

(define-syntax define-predicate
  (syntax-rules ()
    ((define-predicate <name>)
     ;;=>
     (define-operation (<name> obj) #f)
    )
) )


;; OBJECT

(define-syntax object
  (syntax-rules ()
    ((object ((<name> <self> <arg> ...) <exp1> <exp2> ...) ...)
    ;;=>
     (let ( (table
	      (list (cons <name>
			  (lambda (<self> <arg> ...) <exp1> <exp2> ...))
		      ...
	    ) )
	  )
      (yasos:make-instance
	(lambda (op)
	  (cond
	    ((assq op table) => cdr)
	    (else #f)
) ) )))) )


;; OBJECT with MULTIPLE INHERITANCE  {First Found Rule}

(define-syntax object-with-ancestors
  (syntax-rules ()
    ((object-with-ancestors ( (<ancestor1> <init1>) ... ) <operation> ...)
    ;;=>
     (let ( (<ancestor1> <init1>) ...  )
      (let ( (child (object <operation> ...)) )
       (yasos:make-instance
	 (lambda (op)
	    (or ((yasos:instance-dispatcher child) op)
		((yasos:instance-dispatcher <ancestor1>) op) ...
       ) )  )
    )))
) )


;; OPERATE-AS  {a.k.a. send-to-super}

; used in operations/methods

(define-syntax operate-as
  (syntax-rules ()
   ((operate-as <component> <op> <composit> <arg> ...)
   ;;=>
    (((yasos:instance-dispatcher <component>) <op>) <composit> <arg> ...)
  ))
)



;; SET & SETTER


(define-syntax set
  (syntax-rules ()
    ((set (<access> <index> ...) <newval>)
     ((yasos:setter <access>) <index> ... <newval>)
    )
    ((set <var> <newval>)
     (set! <var> <newval>)
    )
) )


(define yasos:add-setter	'bogus)
(define yasos:remove-setter-for 'bogus)

(define yasos:setter
  (let ( (known-setters (list (cons car set-car!)
			      (cons cdr set-cdr!)
			      (cons vector-ref vector-set!)
			      (cons string-ref string-set!))
	 )
	 (added-setters '())
       )

    (set! yasos:add-setter
      (lambda (getter setter)
	(set! added-setters (cons (cons getter setter) added-setters)))
    )
    (set! yasos:remove-setter-for
      (lambda (getter)
	(cond
	  ((null? added-setters)
	   (slib:error "REMOVE-SETTER-FOR: Unknown getter" getter)
	  )
	  ((eq? getter (caar added-setters))
	   (set! added-setters (cdr added-setters))
	  )
	  (else
	    (let loop ((x added-setters) (y (cdr added-setters)))
	      (cond
		((null? y) (slib:error "REMOVE-SETTER-FOR: Unknown getter"
				       getter))
		((eq? getter (caar y)) (set-cdr! x (cdr y)))
		(else (loop (cdr x) (cdr y)))
	  ) ) )
     ) ) )

    (letrec ( (self
		 (lambda (proc-or-operation)
		   (cond ((assq proc-or-operation known-setters) => cdr)
			 ((assq proc-or-operation added-setters) => cdr)
			 (else (proc-or-operation self))) )
	    ) )
      self)
) )



(define (yasos:make-access-operation <name>)
  (letrec ( (setter-dispatch
	       (lambda (inst . args)
		   (cond
		     ((and (yasos:instance? inst)
			   ((yasos:instance-dispatcher inst) setter-dispatch))
		       => (lambda (method) (apply method inst args))
		     )
		     (else #f)))
	    )
	    (self
	       (lambda (inst . args)
		  (cond
		     ((eq? inst yasos:setter) setter-dispatch) ; for (setter self)
		     ((and (yasos:instance? inst)
			   ((yasos:instance-dispatcher inst) self))
		      => (lambda (method) (apply method inst args))
		     )
		     (else (slib:error "Operation not handled" <name> inst))
		)  )
	    )
	  )

	  self
) )

(define-syntax define-access-operation
  (syntax-rules ()
    ((define-access-operation <name>)
     ;=>
     (define <name> (yasos:make-access-operation '<name>))
) ) )



;;---------------------
;; general operations
;;---------------------

(define-operation (yasos:print obj port)
  (format port
	  ;; if an instance does not have a PRINT operation..
	  (if (yasos:instance? obj) "#<INSTANCE>" "~s")
	  obj
) )

(define-operation (yasos:size obj)
  ;; default behavior
  (cond
    ((vector? obj) (vector-length obj))
    ((list?   obj) (length obj))
    ((pair?   obj) 2)
    ((string? obj) (string-length obj))
    ((char?   obj) 1)
    (else
      (slib:error "Operation not supported: size" obj))
) )

(require 'format)

;;; exports:

(define print yasos:print)		; print also in debug.scm
(define size yasos:size)
(define add-setter yasos:add-setter)
(define remove-setter-for yasos:remove-setter-for)
(define setter yasos:setter)

(provide 'oop)				;in case we were loaded this way.
;;		    --- E O F "yasos.scm" ---		  ;;
