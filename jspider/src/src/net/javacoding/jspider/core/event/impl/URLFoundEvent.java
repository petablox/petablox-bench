package net.javacoding.jspider.core.event.impl;


import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.event.CoreEventVisitor;

import java.net.URL;


/**
 *
 * $Id: URLFoundEvent.java,v 1.4 2003/02/28 17:39:05 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class URLFoundEvent extends BaseCoreEventImpl {

    protected URL foundURL;
    protected URL url;

    public URLFoundEvent(SpiderContext context, URL url, URL foundURL) {
        super(context);
        this.url = url;
        this.foundURL = foundURL;
    }

    public URL getURL() {
        return url;
    }

    public URL getFoundURL() {
        return foundURL;
    }

    public void accept(URL url, CoreEventVisitor visitor) {
        visitor.visit(url, this);
    }

}
