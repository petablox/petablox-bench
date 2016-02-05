BACKUP=../../..

VPATH = $(BACKUP)/classes/javasrc/xref

FILES = JavaLexer.class \
 JavaToken.class \
 JavaTokenTypes.class \
 JavaXref.class

all: JavaXref.java $(FILES)

JavaXref.java: java.g
	java -classpath "$(BACKUP)/classes" antlr.Tool java.g

%.class: %.java
	javac -classpath "$(BACKUP)/classes;$(BACKUP)/src" -d ../../../classes $<
