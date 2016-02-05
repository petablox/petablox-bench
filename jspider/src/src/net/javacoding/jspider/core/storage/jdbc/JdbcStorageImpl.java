package net.javacoding.jspider.core.storage.jdbc;


import net.javacoding.jspider.core.model.SummaryInternal;
import net.javacoding.jspider.core.storage.*;
import net.javacoding.jspider.core.util.config.PropertySet;
import net.javacoding.jspider.core.logging.LogFactory;
import net.javacoding.jspider.api.model.*;

import java.sql.*;


/**
 * $Id: JdbcStorageImpl.java,v 1.5 2003/04/05 16:22:12 vanrogu Exp $
 *
 * @author Günther Van Roey
 *
 * @todo DAO's need caching - definitely !
 * @todo find a good way of cleaning the store at spidering start or layering it per spider session
 */
class JdbcStorageImpl implements Storage {

    protected SiteDAO siteDAO;
    protected ResourceDAO resourceDAO;
    protected ContentDAO contentDAO;
    protected DecisionDAO decisionDAO;
    protected CookieDAO cookieDAO;

    public JdbcStorageImpl(PropertySet props) {
        DBUtil dbUtil = new DBUtil(props);
        siteDAO = new SiteDAOImpl(this,dbUtil);
        resourceDAO = new ResourceDAOImpl(this,dbUtil);
        contentDAO = new ContentDAOImpl(this,dbUtil);
        decisionDAO = new DecisionDAOImpl(this,dbUtil);
        cookieDAO = new CookieDAOImpl(this,dbUtil);
        clearDatabase ( dbUtil );
    }

    protected void clearDatabase ( DBUtil dbUtil ) {
        Connection connection = dbUtil.getConnection();
        try {
            Statement st = connection.createStatement();
            st.executeUpdate("delete from jspider_site");
            st.executeUpdate("delete from jspider_resource");
            st.executeUpdate("delete from jspider_content");
            st.executeUpdate("delete from jspider_cookie");
            st.executeUpdate("delete from jspider_resource_reference");
            st.executeUpdate("delete from jspider_decision");
            st.executeUpdate("delete from jspider_decision_step");
        } catch (SQLException e) {
            LogFactory.getLog(JdbcStorageImpl.class).error("SQLException during emtpy of database", e);
        }

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

    /**
     * @todo refactory summary construction to move it out of a specific storage impl (duplicated!!!) -- introduce StorageProxy
     */
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
