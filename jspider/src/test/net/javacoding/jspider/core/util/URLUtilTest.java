package net.javacoding.jspider.core.util;

import junit.framework.TestCase;

import java.net.URL;

/**
 * $Id: URLUtilTest.java,v 1.6 2003/03/06 19:17:24 vanrogu Exp $
 */
public class URLUtilTest extends TestCase {

    public URLUtilTest ( ) {
        super ( "URLUtilTest" );
    }

    protected void setUp() throws Exception {
        super.setUp();
    }

    public void testNormalizeNullURL ( ) throws Exception {
        URL normalized = URLUtil.normalize(null);
        assertNull ( "null URL normalization didn't return null", normalized);
    }

    public void testNormalizeSimpleURL ( ) throws Exception {
        URL original = new URL("http://j-spider.sourceforge.net");
        URL expected = original;
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "simple URL normalization didn't return the same url", equals);
    }

    public void testNormalizeURLWithParams ( ) throws Exception {
        URL original = new URL("http://j-spider.sourceforge.net/index.html?param1=value1&param2=value2");
        URL expected = new URL("http://j-spider.sourceforge.net/index.html");
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "simple URL normalization didn't return the same url", equals);
    }

    public void testNormalizeURLWithFolderAndParams ( ) throws Exception {
        URL original = new URL("http://j-spider.sourceforge.net/manual?param1=value1&param2=value2");
        URL expected = new URL("http://j-spider.sourceforge.net/manual");
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "simple URL normalization didn't return the same url", equals);
    }

    public void testNormalizeURLWithFolderAndTrailingSlashAndParams ( ) throws Exception {
        URL original = new URL("http://j-spider.sourceforge.net/manual/?param1=value1&param2=value2");
        URL expected = new URL("http://j-spider.sourceforge.net/manual");
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "simple URL normalization didn't return the same url", equals);
    }

    public void testNormalizeSingleDotFolder ( ) throws Exception {
        URL original = new URL("http://j-spider.sourceforge.net/folder/./subfolder");
        URL expected = new URL("http://j-spider.sourceforge.net/folder/subfolder");
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "URL with single dot folder normalization failed", equals);
    }

    public void testNormalizeMultipleDotFolder ( ) throws Exception {
        URL original = new URL("http://j-spider.sourceforge.net/./folder/./subfolder/./a");
        URL expected = new URL("http://j-spider.sourceforge.net/folder/subfolder/a");
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "URL with single dot folder normalization failed", equals);
    }

    public void testNormalizeTrailingSlash ( ) throws Exception {
        URL original = new URL("http://j-spider.sourceforge.net/");
        URL expected = new URL("http://j-spider.sourceforge.net");
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "URL with trailing slash did not normalize well", equals);
    }

    public void testNormalizeCombinedFunctionality ( ) throws Exception {
        // multiple dot folders and a trailing slash !
        URL original = new URL("http://j-spider.sourceforge.net/./folder/./subfolder/./");
        URL expected = new URL("http://j-spider.sourceforge.net/folder/subfolder");
        URL normalized = URLUtil.normalize(original);

        boolean equals = normalized.equals(expected);

        assertTrue ( "URL with many flows normalize failed", equals);
    }

    public void testSiteURLFromSimpleURL ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net/index.html" );
        URL expected = new URL ( "http://j-spider.sourceforge.net" );
        URL actual = URLUtil.getSiteURL(url);

        boolean equals = actual.equals ( expected );
        assertTrue ( "simple resource url failed to resolve to site url", equals );
    }


    public void testSiteURLFromNullURL ( ) throws Exception {
        URL actual = URLUtil.getSiteURL(null);
        assertNull ( "null resource url failed to resolve to null site url", actual );
    }


    public void testSiteURLFromSiteURL ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net" );
        URL expected = new URL ( "http://j-spider.sourceforge.net" );
        URL actual = URLUtil.getSiteURL(url);

        boolean equals = actual.equals ( expected );
        assertTrue ( "site url failed to resolve to itself as site url", equals );
    }

    public void testSiteURLFromSiteURLWithTrailingSlash ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net/" );
        URL expected = new URL ( "http://j-spider.sourceforge.net" );
        URL actual = URLUtil.getSiteURL(url);

        boolean equals = actual.equals ( expected );
        assertTrue ( "site url failed to resolve to itself as site url", equals );
    }

    public void testSiteURLFromSimpleURLWithPort ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net:123/index.html" );
        URL expected = new URL ( "http://j-spider.sourceforge.net:123" );
        URL actual = URLUtil.getSiteURL(url);

        boolean equals = actual.equals ( expected );
        assertTrue ( "simple resource url with port failed to resolve to site url", equals );
    }

    public void testSiteURLFromSiteURLWithPort ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net:123" );
        URL expected = new URL ( "http://j-spider.sourceforge.net:123" );
        URL actual = URLUtil.getSiteURL(url);

        boolean equals = actual.equals ( expected );
        assertTrue ( "simple resource url with port failed to resolve to site url", equals );
    }

    public void testSiteURLFromSiteURLWithPortAndTrailingSlash ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net:123/" );
        URL expected = new URL ( "http://j-spider.sourceforge.net:123" );
        URL actual = URLUtil.getSiteURL(url);

        boolean equals = actual.equals ( expected );
        assertTrue ( "simple resource url with port failed to resolve to site url", equals );
    }

    public void testSiteURLFromFtpURLWithPortAndTrailingSlash ( ) throws Exception {
        URL url = new URL ( "ftp://j-spider.sourceforge.net:123/folder/" );
        URL expected = new URL ( "ftp://j-spider.sourceforge.net:123" );
        URL actual = URLUtil.getSiteURL(url);

        boolean equals = actual.equals ( expected );
        assertTrue ( "ftp resource url with port failed to resolve to site url", equals );
    }

    public void testGetRobotsTXTUrlSimple ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net" );
        URL expected = new URL ( "http://j-spider.sourceforge.net/robots.txt" );
        URL actual = URLUtil.getRobotsTXTURL(url);
        boolean equals = expected.equals(actual);
        assertTrue("getRobotsTXTURL failed", equals);
    }

    public void testGetRobotsTXTUrlFromNullURL ( ) throws Exception {
        URL actual = URLUtil.getRobotsTXTURL(null);
        assertNull("getRobotsTXTURL (null url) failed", actual);
    }

    public void testGetRobotsTXTUrlTrailingSlash ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net/" );
        URL expected = new URL ( "http://j-spider.sourceforge.net/robots.txt" );
        URL actual = URLUtil.getRobotsTXTURL(url);
        boolean equals = expected.equals(actual);
        assertTrue("getRobotsTXTURL failed", equals);
    }

    public void testGetRobotsTXTUrlWithPort ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net:123" );
        URL expected = new URL ( "http://j-spider.sourceforge.net:123/robots.txt" );
        URL actual = URLUtil.getRobotsTXTURL(url);
        boolean equals = expected.equals(actual);
        assertTrue("getRobotsTXTURL failed", equals);
    }

    public void testGetRobotsTXTUrlWithPortAndTrailingSlash ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net:123/" );
        URL expected = new URL ( "http://j-spider.sourceforge.net:123/robots.txt" );
        URL actual = URLUtil.getRobotsTXTURL(url);
        boolean equals = expected.equals(actual);
        assertTrue("getRobotsTXTURL failed", equals);
    }

    public void testGetRobotsTXTUrlWithFolders ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net/folder/folder/resource.html" );
        URL expected = new URL ( "http://j-spider.sourceforge.net/robots.txt" );
        URL actual = URLUtil.getRobotsTXTURL(url);
        boolean equals = expected.equals(actual);
        assertTrue("getRobotsTXTURL failed", equals);
    }

    public void testGetRobotsTXTUrlWithPortAndFolders ( ) throws Exception {
        URL url = new URL ( "http://j-spider.sourceforge.net:123/folder/folder/resource.html" );
        URL expected = new URL ( "http://j-spider.sourceforge.net:123/robots.txt" );
        URL actual = URLUtil.getRobotsTXTURL(url);
        boolean equals = expected.equals(actual);
        assertTrue("getRobotsTXTURL failed", equals);
    }

    public void testStripResourceNullResource ( ) {
        String path = null;
        String result = URLUtil.stripResource(path);
        String expected = null;
        boolean equals = result == expected;
        assertTrue ( "stripResource failed", equals );
    }

    public void testStripResourceSimple ( ) {
        String path = "/folder/subfolder/resource.html";
        String result = URLUtil.stripResource(path);
        String expected = "/folder/subfolder/";
        boolean equals = expected.equals(result);
        assertTrue ( "stripResource failed", equals );
    }

    public void testStripResourceTrailingSlash ( ) {
        String path = "/folder/subfolder/";
        String result = URLUtil.stripResource(path);
        String expected = "/folder/subfolder/";
        boolean equals = expected.equals(result);
        assertTrue ( "stripResource failed", equals );
    }

    public void testStripResourceOnlySlash ( ) {
        String path = "/";
        String result = URLUtil.stripResource(path);
        String expected = "/";
        boolean equals = expected.equals(result);
        assertTrue ( "stripResource failed", equals );
    }

    public void testStripResourceOnlyFolder ( ) {
        String path = "/folder";
        String result = URLUtil.stripResource(path);
        String expected = "/";
        boolean equals = expected.equals(result);
        assertTrue ( "stripResource failed", equals );
    }

}
