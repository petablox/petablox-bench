package net.javacoding.jspider.core.storage.memory;

import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.storage.SiteDAO;
import net.javacoding.jspider.core.storage.Storage;

import java.net.URL;
import java.util.HashMap;
import java.util.Map;

/**
 * $Id: SiteDAOImpl.java,v 1.5 2003/04/04 20:06:14 vanrogu Exp $
 */
class SiteDAOImpl implements SiteDAO {

    protected Storage storage;
    protected Map sites;

    public SiteDAOImpl ( Storage storage ) {
        this.storage = storage;
        sites = new HashMap ( );
    }

    public Site find(URL siteURL) {
        return (Site)sites.get(siteURL);
    }

    public void save(Site site) {
        URL siteURL = site.getURL();
        sites.put(siteURL, site);
    }

    public Site[] findAll() {
        return (Site[]) sites.values().toArray(new Site[sites.size()]);
    }

}
