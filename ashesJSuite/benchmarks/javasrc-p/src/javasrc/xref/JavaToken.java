package javasrc.xref;


import java.io.File;

/*******************************************************************************
 * A simple token that is used to relay information from the scanner to
 * the parser.  We've extended it to save information about the file from
 * which the token was created, and the number of parameters (telling if the
 * symbol looked like a method invocation or some other symbol reference.)
 ******************************************************************************/
public class JavaToken extends antlr.CommonToken {
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** A count of the parameters used to call a method.
     *  -1 means the symbol is not a method invocation
     */
    private int paramCount = -1;
    
    /** A reference to the File that was scanned to create this symbol */
    private File file = null;


    protected int column;
    protected int charNum;
    protected String packageName;
    protected String className;
    protected String methodName;

    public int getColumn() { return column; }
    public void setColumn(int c) { column=c; }
    public String getPackageName() { return packageName; }
    public void setPackageName(String name) { packageName=name; }
    public String getClassName() { return className; }
    public void setClassName(String name) { className=name; }
    public String getMethodName() { return methodName; }
    public void setMethodName(String name) { methodName=name; }

    //==========================================================================
    //==  Methods
    //==========================================================================

    public JavaToken()
    {

    }

    public JavaToken(JavaToken t)
    {
	column=t.getColumn();
	file=t.getFile();
	packageName=t.getPackageName();
	paramCount=t.getParamCount();
	this.setLine(t.getLine());
	this.setText(t.getText());
	this.setType(t.getType());
    }

    /** get the File that contained the text scanned for this token */
    public File getFile() {
        return file;
    }       


    /** get the number of parameters for this token (if it represents a 
     *  method invocation 
     */
    public int getParamCount() {
        return paramCount;
    }


    /** Sets the file property of this token */
    public void setFile(File file) {
        this.file = file;
    }


    /** Sets the parameter count property of this token */
    public void setParamCount(int count) {
        paramCount = count;
    }

    public String toString() {
		return "[\""+getText()+"\",type:<"+getType()+">,line:"+getLine()+
		        ",col:"+getColumn()+",file:"+getFile().getName()+"]";
    }
}
