package net.javacoding.jspider.core.util.html;

import java.net.URL;

/**
 * $Id: URLFinderCallback.java,v 1.2 2003/03/27 17:44:23 vanrogu Exp $
 */
public interface URLFinderCallback {

    public void urlFound ( URL foundURL );

    public void malformedUrlFound ( String malformedURL );

}
