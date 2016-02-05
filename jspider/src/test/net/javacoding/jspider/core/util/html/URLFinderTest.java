package net.javacoding.jspider.core.util.html;

import junit.framework.TestCase;

import java.net.URL;

/**
 * $Id: URLFinderTest.java,v 1.3 2003/03/28 17:26:32 vanrogu Exp $
 */
public class URLFinderTest extends TestCase implements URLFinderCallback {

    protected int count;
    protected int malformed;
    protected URL baseURL;
    protected URL lastURL;

    public URLFinderTest ( ) {
        super ( "URLFinderTest" );
    }

    protected void setUp() throws Exception {
        count = 0;
        malformed = 0;
        baseURL = new URL("http://j-spider.sourceforge.net");
    }

    public void urlFound(URL foundURL) {
        count++;
        lastURL = foundURL;
    }

    public void malformedUrlFound(String malformedURL) {
        malformed++;
    }

    public void testStringWithNoURL ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with no url in it");
        int expected = 0;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringWithNoURLNullBaseURL ( ) throws Exception {
        URLFinder.findURLs(this, null, "this is a line with no url in it");
        int expected = 0;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringWithOneURL ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href='index.html'>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/index.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringWithOneURLNullBaseURL ( ) throws Exception {
        URLFinder.findURLs(this, null, "this is a line with a <a href='http://index.html'>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringWithTwoURLs ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href='index.html'>url</a> in it, and a <a href='second.html'>second one</a> also");
        int expected = 2;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/second.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringWithTwoURLsNullBaseURL ( ) throws Exception {
        URLFinder.findURLs(this, null, "this is a line with a <a href='http://index.html'>url</a> in it, and a  <a href='http://second.html'>second one</a> also");
        int expected = 2;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringSingleQuote ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href='index.html'>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringDoubleQuote ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href=\"index.html\">url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringDoubleNoQuotes ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href=index.html>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringBadlyQuoted1 ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href=\"index.html>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/index.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringBadlyQuoted2 ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href='index.html>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/index.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringBadlyQuoted3 ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href=index.html'>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/index.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringBadlyQuoted4 ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href=index.html\">url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/index.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringBadlyQuoted5 ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href='index.html\">url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/index.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testStringBadlyQuoted6 ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href=\"index.html'>url</a> in it");
        int expected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("url found wasn't the one expected", new URL("http://j-spider.sourceforge.net/index.html"), lastURL);
        assertEquals("malformed URLs reported", 0, malformed);
    }

    public void testMalformed ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with a <a href=\"someprotocol:index.html'>url</a> in it");
        int expected = 0;
        int malformedExpected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("number of malformed URLs reported differs from expected", malformedExpected, malformed);
    }

    public void testTwoMalformed ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with two malformed <a href=\"someprotocol:index.html'>urls</a><a href='test:'/> in it");
        int expected = 0;
        int malformedExpected = 2;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("number of malformed URLs reported differs from expected", malformedExpected, malformed);
    }

    public void testWellformedAndMalformed ( ) throws Exception {
        URLFinder.findURLs(this, baseURL, "this is a line with one malformed <a href=\"someprotocol:index.html'>urls</a><a href='index.html'/> in it, and one wellformed");
        int expected = 1;
        int malformedExpected = 1;
        assertEquals("actual nr of urls found differs from expected", expected, count);
        assertEquals("number of malformed URLs reported differs from expected", malformedExpected, malformed);
    }

}
