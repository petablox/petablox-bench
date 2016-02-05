VPATH = ../../../classes/javasrc/util

FILES = JSCollections.class \
 JSComparable.class \
 SortableString.class

%.class: %.java
	javac -classpath "../../../classes;../.." -d ../../../classes $<

all: $(FILES)
