package net.javacoding.jspider.core.storage;


import net.javacoding.jspider.api.model.Summary;


/**
 *
 * $Id: Storage.java,v 1.14 2003/04/05 16:22:12 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public interface Storage {

    public SiteDAO getSiteDAO ( );
    public ResourceDAO getResourceDAO ( );
    public ContentDAO getContentDAO ( );
    public DecisionDAO getDecisionDAO ( );
    public CookieDAO getCookieDAO ( );
    public Summary getSummary ( );

}
