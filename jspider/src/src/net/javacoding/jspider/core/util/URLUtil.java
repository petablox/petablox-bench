package net.javacoding.jspider.core.util;

import java.net.MalformedURLException;
import java.net.URL;

/**
 * Some URL related methods gathered as static methods in this utility class.
 *
 * $Id: URLUtil.java,v 1.7 2003/03/06 19:17:22 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class URLUtil {

    /**
     * Normalizes the given url by replacing '/./' by '/' and removes trailing slashes
     * @param original the original URL to be normalized
     * @return the normalized url
     */
    public static URL normalize(URL original) {
        URL normalized = null;

        if (original != null) {

            String urlString = original.toString();
            urlString = StringUtil.replace(urlString, "/./", "/");

            int index = urlString.indexOf('?');
            if (index >= 0) {
                urlString = urlString.substring(0, index);
            }

            if (urlString.endsWith("/")) {
                urlString = urlString.substring(0, urlString.length() - 1);
            }

            try {
                normalized = new URL(urlString);
            } catch (MalformedURLException e) {
            }
        }
        return normalized;
    }

    /**
     * Converts any resource URL to the site's url.
     * @param resourceURL the url of the resource to find the url of the site for
     * @return the URL pointing to the site in which the resource is located
     */
    public static URL getSiteURL(URL resourceURL) {
        URL siteURL = null;
        if (resourceURL != null) {
            try {
                siteURL = new URL(resourceURL.getProtocol(), resourceURL.getHost(), resourceURL.getPort(), "");
            } catch (MalformedURLException e) {
                // shouldn't happen, we're only dropping the PATH part of a valid URL ...
            }
        }
        return siteURL;
    }

    /**
     * Reuturns the URL of the robots.txt resource in the site of the given resource.
     * @param resourceURL the URL of the resource to find the site's robots.txt of
     * @return URL pointing to the robots.txt resource of the site in which resourceURL is
     */
    public static URL getRobotsTXTURL(URL resourceURL) {
        URL retVal = null;
        if (resourceURL != null) {
            try {
                retVal = new URL(getSiteURL(resourceURL), "/robots.txt");
            } catch (MalformedURLException e) {
            }
        }
        return retVal;
    }


    public static String stripResource ( String path ) {
        String result = null;
        if ( path != null ) {
            int pos = path.lastIndexOf("/");
            result = path.substring(0, pos + 1);
        }
        return result;
    }

}
