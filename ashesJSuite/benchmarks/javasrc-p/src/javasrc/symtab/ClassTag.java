package javasrc.symtab;

import javasrc.util.*;

/*******************************************************************************
 * An occurrence of an HTML Tag in a file
 ******************************************************************************/
public class ClassTag implements JSComparable
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================

    /** The key */
    private String _key;

    /** The tag */
    private String _tag;

    //==========================================================================
    //==  Methods
    //==========================================================================

    public String getKey() { return _key; }
    public String getTag() { return _tag; }    

    /** Constructor to define a new tag */
    ClassTag(String key, String tag)
    {
	_key = key;
	_tag = tag;
    }   

    /** return a string representation of the occurrence */
    public String toString()
    {
        return _tag;
    }

    public int compareTo(Object o)
    {
	ClassTag t = (ClassTag) o;
	return _key.compareTo(t.getKey());
    }
}
