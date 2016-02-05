package net.javacoding.jspider.core.util.html;

import net.javacoding.jspider.core.util.URLUtil;

import java.net.MalformedURLException;
import java.net.URL;
import java.util.StringTokenizer;

/**
 * $Id: URLFinder.java,v 1.7 2003/03/28 17:26:31 vanrogu Exp $
 */
public class URLFinder {

    public static final String[] patterns = {
      "href=",
      "src=",
      "background="
    };

    public static void findURLs(URLFinderCallback callback, URL url, String line) {
        for (int i = 0; i < patterns.length; i++) {
            String pattern = patterns[i];
            findURLs(callback, url, line, pattern);
        }
    }

    protected static void findURLs(URLFinderCallback callback, URL url, String line, String pattern) {
        String lineLowerCase = line.toLowerCase();
        int pos = lineLowerCase.indexOf(pattern);
        while (pos > 0) {
            String uri = "";
            try {
                uri = extractURL(line, pos + pattern.length());
                URL foundURL = URLUtil.normalize(new URL(url, uri));
                callback.urlFound(foundURL);
            } catch (MalformedURLException e) {
                callback.malformedUrlFound(uri);
            }
            pos = lineLowerCase.indexOf(pattern, pos + pattern.length());
        }
    }

    protected static String extractURL(String string, int pos) {
        char c = string.charAt(pos);
        String ret = "";
        if (c == '\'' || c == '"') {
            string = string.substring(pos + 1);
        } else {
            string = string.substring(pos);
        }
        if (string.length() > 0) {
            c = string.charAt(0);
            if (c == '\'' || c == '\"' || c == '>') {
                ret = "";
            } else {
                StringTokenizer st = new StringTokenizer(string, " \"\'>");
                ret = st.nextToken();
            }
        }
        int p = ret.indexOf('#');
        if (p > -1) {
            return ret.substring(0, p);
        } else {
            return ret;
        }
    }

}
