/**
 * $Id: StringUtilTest.java,v 1.1 2003/01/26 14:07:30 vanrogu Exp $
 */
package net.javacoding.jspider.core.util;

import junit.framework.TestCase;

public class StringUtilTest extends TestCase {

    public StringUtilTest ( ) {
        super ( "StringUtilTest" );
    }

    public void testDoNothing ( ) {
        String original = "This is a string";
        String expected = new String(original);
        String pattern="pattern";
        String replacement = "[replaced]";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

    public void testSimple ( ) {
        String original = "This is a string with a pattern in it";
        String expected = "This is a string with a [replaced] in it";
        String pattern="pattern";
        String replacement = "[replaced]";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

    public void testBeginning ( ) {
        String original = "pattern at the start of this string must be replaced";
        String expected = "[replaced] at the start of this string must be replaced";
        String pattern="pattern";
        String replacement = "[replaced]";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

    public void testEnd ( ) {
        String original = "At the end of this string, ther's a pattern";
        String expected = "At the end of this string, ther's a [replaced]";
        String pattern="pattern";
        String replacement = "[replaced]";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

    public void testMultiple ( ) {
        String original = "pattern, here, pattern there, hope all this patterns will be replaced by pattern";
        String expected = "[replaced], here, [replaced] there, hope all this [replaced]s will be replaced by [replaced]";
        String pattern="pattern";
        String replacement = "[replaced]";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

    public void testSmall ( ) {
        String original = "..........";
        String expected = "xxxxxxxxxx";
        String pattern=".";
        String replacement = "x";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

    public void testReplacementIncludesPattern ( ) {
        String original = "..........";
        String expected = "....................";
        String pattern=".";
        String replacement = "..";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

    public void testPatternIncludesReplacement ( ) {
        String original = "....................";
        String expected = "..........";
        String pattern="..";
        String replacement = ".";

        String result = StringUtil.replace(original, pattern, replacement);
        assertEquals ( "replacement failed", expected, result);
    }

}
