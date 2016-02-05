package javasrc.symtab;

import java.io.File;

/*******************************************************************************
 * An occurrence of an indentifier in a file 
 ******************************************************************************/
class Occurrence
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** The file containing the occurrence */
    private File file; 
    
    /** The line number containing the occurrence */
    private int line; 

    /** The column number containing the occurrence */
    private int column;

    private String _packageName="";
    private String _className="";
    private String _methodName="";


    //==========================================================================
    //==  Methods
    //==========================================================================

    public int getLine() { return line; }
    public int getColumn() { return column; }
    public File getFile() { return file; }
    public String getPackageName() { return _packageName; }    
    public String getClassName() { return _className; }    
    public String getMethodName() { return _methodName; }    
    public void setPackageName(String packageName) { _packageName=packageName; }    
    public void setClassName(String className) { _className=className; }    
    public void setMethodName(String methodName) { _methodName=methodName; }    

    /** Constructor to define a new occurrence */
    Occurrence(File file, int line) {
        this.file = file;
        this.line = line;
    }   

    /** Constructor to define a new occurrence */
    Occurrence(File file, int line, int column) {
	this(file,line);
	this.column = column;
    }   

    /** Constructor to define a new occurrence */
    Occurrence(File file, int line, int column, String packageName)
    {
	this(file,line,column);
	_packageName=packageName;
    }   

    /** Constructor to define a new occurrence */
    Occurrence(File file, int line, int column, String packageName,String className,
	       String methodName)
    {
	this(file,line,column,packageName);
	_className=className;
	_methodName=methodName;
    }   

    public String getLinkReference()
    {
        String name = getFile().getName();
	name = name.replace('.','_');
	name = name + ".html";
	name = name + "#" + Integer.toString(line);
	return (name);
    }

    /** return a string representation of the occurrence */
    public String getLocation() {
        return "[" + file + ":" + line + ":" + column + "]";
    }

    /** return a string representation of the occurrence */
    public String toString() {
        return "Occurrence [" + file + "," + line + "," + column + "]";
    }
}
