package net.javacoding.jspider.core.storage.memory;

import net.javacoding.jspider.api.model.Resource;
import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.event.impl.*;
import net.javacoding.jspider.core.model.ResourceInternal;
import net.javacoding.jspider.core.storage.ResourceDAO;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.storage.exception.InvalidStateTransitionException;
import net.javacoding.jspider.core.util.URLUtil;

import java.net.URL;
import java.util.*;

/**
 * $Id: ResourceDAOImpl.java,v 1.8 2003/04/04 20:06:14 vanrogu Exp $
 */
class ResourceDAOImpl implements ResourceDAO {

    protected Storage storage;

    protected Map knownURLs;

    protected Set spideredResources; /* urls visited by a spider, but not yet parsed */

    protected Set ignoredForFetchingResources; /* urls ignored because of rule decisions */
    protected Set ignoredForParsingResources; /* urls ignored because non-HTML */
    protected Set forbiddenResources; /* forbidden urls */
    protected Set fetchErrorResources; /* urls that could not be visited by the spider */
    protected Set parseErrorResources; /* resources that could not be parsed correctly */
    protected Set parsedResources; /* urls that were spidered AND interpreted */

    protected Map referers;
    protected Map referees;

    public ResourceDAOImpl(Storage storage) {
        this.storage = storage;
        spideredResources = new HashSet();
        ignoredForFetchingResources = new HashSet();
        ignoredForParsingResources = new HashSet();
        forbiddenResources = new HashSet();
        fetchErrorResources = new HashSet();
        parseErrorResources = new HashSet();
        parsedResources = new HashSet();
        knownURLs = new HashMap();
        this.referees = new HashMap();
        this.referers = new HashMap();
    }

    public synchronized Resource registerURL(URL url) {
        Resource resource = null;
        if (!knownURLs.containsKey(url)) {
            Site site = storage.getSiteDAO().find(URLUtil.getSiteURL(url));
            resource = new ResourceInternal(storage, site, url, new Date(), null);
            knownURLs.put(url, resource);
        } else {
            resource = (Resource) knownURLs.get(url);
        }
        return resource;
    }

    public void registerURLReference(URL url, URL refererURL) {
        Resource resource = (Resource) knownURLs.get(url);
        if (refererURL != null) {
            Resource referer = (Resource) knownURLs.get(refererURL);
            storeRef(referers, resource, referer);
            storeRef(referees, referer, resource);
        }
    }

    protected void storeRef(Map map, Resource key, Resource data) {
        Set set = (Set) map.get(key.getURL());
        if (set == null) {
            set = new HashSet();
            map.put(key.getURL(), set);
        }
        set.add(data);
    }

    public Resource[] getAllResources() {
        return (Resource[]) knownURLs.values().toArray(new Resource[knownURLs.size()]);
    }

    public Resource[] getReferers(Resource resource) {
        Set set = (Set) referers.get(resource.getURL());
        if (set == null) {
            return new Resource[0];
        } else {
            return (Resource[]) set.toArray(new Resource[set.size()]);
        }
    }

    public Resource[] getReferences(Resource resource) {
        Set set = (Set) referees.get(resource.getURL());
        if (set == null) {
            return new Resource[0];
        } else {
            return (Resource[]) set.toArray(new Resource[set.size()]);
        }
    }

    public Resource[] getBySite(Site site) {
        ArrayList al = new ArrayList();
        Iterator it = knownURLs.keySet().iterator();
        while (it.hasNext()) {
            URL url = (URL) it.next();
            URL siteURL = URLUtil.getSiteURL(url);
            if (site.getURL().equals(siteURL)) {
                al.add(getResource(url));
            }
        }
        return (Resource[]) al.toArray(new Resource[al.size()]);
    }

    public Resource getResource(URL url) {
        return (Resource) knownURLs.get(url);
    }

    public synchronized void setSpidered(URL url, URLSpideredOkEvent event) {
        ResourceInternal resource = (ResourceInternal) knownURLs.get(url);
        resource.setFetched(event.getHttpStatus(), event.getSize(), event.getTimeMs(), event.getMimeType(), null, event.getHeaders());
        resource.setBytes(event.getBytes());
    }

    public synchronized void setIgnoredForParsing(URL url) throws InvalidStateTransitionException {
        Resource resource = getResource(url);
        ((ResourceInternal) resource).setParseIgnored();
        ignoredForParsingResources.add(url);
    }

    public synchronized void setIgnoredForFetching(URL url, URLFoundEvent event) throws InvalidStateTransitionException {
        Resource resource = getResource(url);
        ((ResourceInternal) resource).setFetchIgnored();
        ignoredForFetchingResources.add(event.getFoundURL());
    }

    public synchronized void setForbidden(URL url, URLFoundEvent event) throws InvalidStateTransitionException {
        Resource resource = getResource(url);
        ((ResourceInternal) resource).setForbidden();
        forbiddenResources.add(event.getFoundURL());
    }

    public synchronized void setError(URL url, ResourceParsedErrorEvent event) throws InvalidStateTransitionException {
        Resource resource = getResource(url);
        ((ResourceInternal) resource).setParseError();
        parseErrorResources.add(url);
    }

    public synchronized void setParsed(URL url, ResourceParsedOkEvent event) throws InvalidStateTransitionException {
        Resource resource = getResource(url);
        ((ResourceInternal) resource).setParsed();
        parsedResources.add(resource);
    }

    public synchronized void setError(URL url, URLSpideredErrorEvent event) throws InvalidStateTransitionException {
        Resource resource = getResource(url);
        ((ResourceInternal) resource).setFetchError(event.getHttpStatus(), event.getHeaders());
        fetchErrorResources.add(url);
    }

}
