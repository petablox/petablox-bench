BACKUP = ../../..

VPATH = $(BACKUP)/classes/antlr/collections

SUBDIRS = impl

FILES= AST.class \
 ASTEnumeration.class \
 BitSetTest.class \
 Enumerator.class \
 LLStackTest.class \
 LListTest.class \
 List.class \
 Stack.class

all: subdirs $(FILES)

subdirs:
	for i in $(SUBDIRS); do \
	  $(MAKE) -C $$i; \
	done

%.class: %.java
	javac -classpath "$(BACKUP)/classes;$(BACKUP)/src" -d $(BACKUP)/classes $<
