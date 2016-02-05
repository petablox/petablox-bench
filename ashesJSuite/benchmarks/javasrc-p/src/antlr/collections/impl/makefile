BACKUP = ../../../..

VPATH = $(BACKUP)/classes/antlr/collections/impl

FILES = ASTArray.class \
 ASTEnumerator.class \
 BitSet.class \
 IndexedVector.class \
 IntRange.class \
 LLCell.class \
 LLEnumeration.class \
 LList.class \
 Vector.class \
 VectorEnumeration.class \
 VectorEnumerator.class

all: $(FILES)

%.class: %.java
	javac -classpath "$(BACKUP)/classes;$(BACKUP)/src" -d $(BACKUP)/classes $<
