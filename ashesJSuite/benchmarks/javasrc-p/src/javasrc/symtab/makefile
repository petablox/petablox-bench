VPATH = ../../../classes/javasrc/symtab

FILES = ArrayDef.class \
 BlockDef.class \
 ClassDef.class \
 ClassTag.class \
 Definition.class \
 DummyClass.class \
 HTMLTag.class \
 HasImports.class \
 JavaHashtable.class \
 JavaStack.class \
 JavaVector.class \
 LabelDef.class \
 MethodDef.class \
 MultiDef.class \
 Occurrence.class \
 PackageDef.class \
 PrimitiveDef.class \
 ScopedDef.class \
 StringTable.class \
 SymbolTable.class \
 Taggable.class \
 TypedDef.class \
 VariableDef.class

%.class: %.java
	javac -classpath "../../../classes;../.." -d ../../../classes $<

all: $(FILES)
