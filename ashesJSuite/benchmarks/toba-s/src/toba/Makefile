#  Makefile for "toba"
#
#  "make classes" builds the class files needed to run Toba and Lister
#  with a java interpreter
#
#  "make package" builds the TOBA package with toba classes used
#  in the runtime.
#

include ../configs/basic.mk
include ../configs/current.mk

TJAVAC = CLASSPATH=..:$(CLASSPATH) ../bin/toba -JK
TOBA = ../bin/toba $(TBUILD)

.SUFFIXES: .java .class
.java.class:	; $(TJAVAC) $<

default: classes

CFSRC = classfile/ClassFile.java classfile/ClassData.java classfile/Names.java \
        classfile/Pair.java classfile/ClassRef.java classfile/FieldRef.java \
	classfile/IHash.java classfile/MethodCode.java \
	classfile/MethodRef.java classfile/Method.java classfile/Opcode.java \
	classfile/Instr.java classfile/Constant.java classfile/VariableRef.java \
	classfile/InterfaceRef.java classfile/Field.java \
	classfile/Attribute.java classfile/Handler.java
TSRC  = translator/Trans.java translator/CFile.java translator/HFile.java \
	translator/ClassInstall.java translator/InsGen.java \
	translator/MethGen.java translator/Repr.java translator/Supers.java
RTSRC = runtime/CodeGen.java runtime/ClassRT.java \
	runtime/SystemClassLoader.java \
	runtime/Supers.java runtime/Resolve.java
JSRC = jit/JITCodeGen.java jit/JIT.java jit/CodeBlock.java jit/Intel86.java \
	jit/BackpatchInfo.java jit/Immediate.java jit/MemoryRef.java \
	jit/Register.java

CFCLASSES = $(CFSRC:.java=.class)
TCLASSES  = $(TSRC:.java=.class)
RTCLASSES = $(RTSRC:.java=.class)
JCLASSES  = $(JSRC:.java=.class)

LCLASSES = $(CFCLASSES) $(RTCLASSES) $(JCLASSES)

#  build the classes needed to run Toba and Lister using the Java interpreter
classes: $(TCLASSES) $(CFCLASSES) helperclasses

# Assistant classes used for building and installing
helperclasses: Lister.class InstallClassFile.class

# Very crude way of getting the right code generator.  We don't
# support the SPARC with this build environment.
jit/JITCodeGen.class: jit/JITCodeGen.java
jit/JITCodeGen.java: jit/Intel86JITCodeGen.java
	rm -f jit/JITCodeGen.java
	ln -s Intel86JITCodeGen.java jit/JITCodeGen.java

# Build to TOBA package.  
# Must have previously  built the API package.  What we build depends
# on whether we need jit/runtime support or not.
package: $(JIT_TARGET)

# A non-jit toba requires only classfile/Names.class in libTOBA.  That's
# used in resolving dynamic symbols from class names with dlsym.
# Everything else can be compiled into xtoba; no point in having it in a
# library.
PCLASSES = classfile/Names.class classfile/ClassRef.class

# If no jit, just do it
nojit: toba.done

# If jit, build the package with all classes we know about.
withjit:
	$(MAKE) PCLASSES="$(LCLASSES)" toba.done

# Want classes put into packages/TOBA/classes/<class hierarchy>.
# The names we have are missing the toba. component, so skip them.
toba.done: $(PCLASSES)
	rm -rf ../packages/TOBA
	mkdir -p ../packages/TOBA/classes
	$(TOBA) -J -I ../runtime -P ../packages/TOBA $(PCLASSES)
	touch toba.done toba.updated
	sleep 1

#  clean up everything

clean:
	rm -rf */*.class *.class toba_*.[cho] toba.done 
	rm -rf so_locations ../packages/TOBA 
