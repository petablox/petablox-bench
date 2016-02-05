package net.javacoding.jspider.core.storage;

import net.javacoding.jspider.api.model.Site;

import java.net.URL;

/**
 * $Id: SiteDAO.java,v 1.1 2003/02/28 17:39:12 vanrogu Exp $
 */
public interface SiteDAO {

    public Site find ( URL siteURL );

    public void save ( Site site );

    public Site[] findAll( );

}
