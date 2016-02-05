package net.javacoding.jspider.core.storage;

import net.javacoding.jspider.api.model.Resource;
import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.event.impl.*;
import net.javacoding.jspider.core.storage.exception.InvalidStateTransitionException;

import java.net.URL;

/**
 * $Id: ResourceDAO.java,v 1.6 2003/04/04 20:06:10 vanrogu Exp $
 */
public interface ResourceDAO {

    public Resource registerURL(URL url);

    public void registerURLReference (URL url, URL referer);

    public Resource[] getAllResources();

    public Resource[] getReferers(Resource resource);

    public Resource[] getReferences(Resource resource);

    public Resource[] getBySite(Site site);

    public Resource getResource(URL url);

    public void setSpidered(URL url, URLSpideredOkEvent event);

    public void setIgnoredForParsing(URL url) throws InvalidStateTransitionException;

    public void setIgnoredForFetching(URL url, URLFoundEvent event) throws InvalidStateTransitionException;

    public void setForbidden(URL url, URLFoundEvent event) throws InvalidStateTransitionException;

    public void setError(URL url, ResourceParsedErrorEvent event) throws InvalidStateTransitionException;

    public void setParsed(URL url, ResourceParsedOkEvent event) throws InvalidStateTransitionException;

    public void setError(URL url, URLSpideredErrorEvent event) throws InvalidStateTransitionException;

}
