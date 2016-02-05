BACKUP = ../../..

VPATH = $(BACKUP)/classes/antlr/actions

FILES= ActionLexer.class \
 ActionLexerTokenTypes.class 

all: $(FILES)

%.class: %.java
	javac -classpath "$(BACKUP)/classes;$(BACKUP)/src" -d $(BACKUP)/classes $<
