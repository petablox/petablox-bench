package javasrc.symtab;

import java.io.File;
import javasrc.util.*;

/*******************************************************************************
 * An occurrence of an HTML Tag in a file
 ******************************************************************************/
public class HTMLTag implements JSComparable
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** The file containing the occurrence */
    private File file; 
    
    /** The line number containing the occurrence */
    private int line; 

    /** The start column of the occurrence */
    private int startColumn;

    /** The end column of the occurrence */
    private int endColumn;

    /** Character num of start of token */
    private int charNum=0;

    /** The original text */
    private String origText;

    /** The text for the tag */
    private String replaceText;

    private String packageName;

    //==========================================================================
    //==  Methods
    //==========================================================================

    public int getLine() { return line; }
    public int getStartColumn() { return startColumn; }
    public int getEndColumn() { return endColumn; }
    public File getFile() { return file; }
    public String getText() { return replaceText; }
    public String getOrigText() { return origText; }
    public String getPackageName() { return packageName; }    
    
    /** Constructor to define a new tag */
    HTMLTag(Occurrence o, String origText, String replaceText)
    {
        this.file = o.getFile();
        this.line = o.getLine();
	this.startColumn = o.getColumn();
	this.endColumn = startColumn+origText.length()-1;
	this.replaceText = replaceText;
	this.origText = origText;
	this.packageName = o.getPackageName();
    }   
    
    /** Constructor to define a new tag */
    HTMLTag(File f, int l, int c, String packageName, String origText, String replaceText)
    {
        this.file = f;
        this.line = l;
	this.startColumn = c;
	this.charNum = charNum;
	this.endColumn = startColumn+origText.length()-1;
	this.replaceText = replaceText;
	this.origText = origText;
	this.packageName = packageName;
    }   

    /** return a string representation of the occurrence */
    public String toString()
    {
        return "HTMLTag [" + file + "," + line + "," + startColumn + "-" + endColumn + "," + replaceText + "]";
    }

    public int compareTo(Object o)
    {
	HTMLTag t = (HTMLTag) o;

	int compare = file.toString().compareTo(t.getFile().toString());
	if (compare != 0)
	  return compare;

	if (getLine() < t.getLine())
	  return -1;
	else if (getLine() > t.getLine())
	  return 1;

	if (getStartColumn() < t.getStartColumn())
	  return -1;
	else if (getStartColumn() > t.getStartColumn())
	  return 1;

        return 0;
    }
}
