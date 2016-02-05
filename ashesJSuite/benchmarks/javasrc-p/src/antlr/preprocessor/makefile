BACKUP=../../..

VPATH = $(BACKUP)/classes/antlr/preprocessor

FILES= Grammar.class \
 GrammarFile.class \
 Hierarchy.class \
 Option.class \
 Preprocessor.class \
 PreprocessorLexer.class \
 PreprocessorTokenTypes.class \
 Rule.class \
 Tool.class

all: $(FILES)

%.class: %.java
	javac -classpath "$(BACKUP)/classes;$(BACKUP)/src" -d $(BACKUP)/classes $<
