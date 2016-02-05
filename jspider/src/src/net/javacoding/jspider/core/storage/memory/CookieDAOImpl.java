package net.javacoding.jspider.core.storage.memory;

import net.javacoding.jspider.core.storage.CookieDAO;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.model.SiteInternal;
import net.javacoding.jspider.api.model.Cookie;
import net.javacoding.jspider.api.model.Site;

import java.util.*;
import java.sql.*;

/**
 * $Id: CookieDAOImpl.java,v 1.1 2003/04/05 16:22:12 vanrogu Exp $
 */
class CookieDAOImpl implements CookieDAO {

    protected Storage storage;
    protected Map cookies;

    public CookieDAOImpl ( Storage storage ) {
        this.storage = storage;
        this.cookies = new HashMap ( );
    }

    public Cookie[] find(Site site) {
        Cookie[] cookies = (Cookie[]) this.cookies.get(site.getURL());
        if ( cookies == null ) {
            cookies = new Cookie[0];
        }
        return cookies;
    }

    public void save(Site site, Cookie[] cookies) {
        this.cookies.put(site.getURL(), cookies);
    }

}
