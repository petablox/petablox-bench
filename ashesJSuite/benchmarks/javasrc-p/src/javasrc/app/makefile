VPATH = ../../../classes/javasrc/app

FILES = \
  HTMLOutputWriter.class \
  JavaSrc.class \
  LineOutputWriter.class

%.class: %.java
	javac -classpath "../../../classes;../.." -d ../../../classes $<

all: $(FILES)
