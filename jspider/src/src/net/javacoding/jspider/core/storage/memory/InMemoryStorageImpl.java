package net.javacoding.jspider.core.storage.memory;


import net.javacoding.jspider.api.model.*;
import net.javacoding.jspider.core.model.SummaryInternal;
import net.javacoding.jspider.core.storage.*;


/**
 *
 * $Id: InMemoryStorageImpl.java,v 1.21 2003/04/05 16:22:12 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
class InMemoryStorageImpl implements Storage {

    protected SiteDAO siteDAO;
    protected ResourceDAO resourceDAO;
    protected ContentDAO contentDAO;
    protected DecisionDAO decisionDAO;
    protected CookieDAO cookieDAO;

    public InMemoryStorageImpl() {
        siteDAO = new SiteDAOImpl(this);
        resourceDAO = new ResourceDAOImpl(this);
        contentDAO = new ContentDAOImpl(this);
        decisionDAO = new DecisionDAOImpl(this);
        cookieDAO = new CookieDAOImpl(this);
    }

    public SiteDAO getSiteDAO() {
        return siteDAO;
    }

    public ResourceDAO getResourceDAO() {
        return resourceDAO;
    }

    public ContentDAO getContentDAO() {
        return contentDAO;
    }

    public DecisionDAO getDecisionDAO() {
        return decisionDAO;
    }

    public CookieDAO getCookieDAO() {
        return cookieDAO;
    }

    public net.javacoding.jspider.api.model.Summary getSummary() {
        Resource[] resources = getResourceDAO().getAllResources();
        int knownURLs = resources.length;

        int parsedResources = 0;
        int ignoredForFetchingResources = 0;
        int ignoredForParsingResources = 0;
        int fetchErrorResources = 0;
        int parseErrorResources = 0;
        int forbiddenResources = 0;
        int unvisitedURLs = 0;
        for (int i = 0; i < resources.length; i++) {
            Resource resource = resources[i];
            switch ( resource.getState()) {
                case Resource.STATE_DISCOVERED:
                  unvisitedURLs++;
                  break;
                case Resource.STATE_FETCH_ERROR :
                    fetchErrorResources++;
                  break;
                case Resource.STATE_FETCH_IGNORED :
                    ignoredForFetchingResources++;
                  break;
                case Resource.STATE_FETCH_FORBIDDEN :
                   forbiddenResources++;
                  break;
                case Resource.STATE_FETCHED :
                  break;
                case Resource.STATE_PARSE_ERROR :
                  parseErrorResources++;
                  break;
                case Resource.STATE_PARSE_IGNORED :
                ignoredForParsingResources++;
                  break;
                case Resource.STATE_PARSED :
                  parsedResources++;
                  break;
            }
        }
        return new SummaryInternal(knownURLs, parsedResources,ignoredForFetchingResources, ignoredForParsingResources,fetchErrorResources,parseErrorResources, forbiddenResources, unvisitedURLs);
    }

}
