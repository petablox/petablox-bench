package net.javacoding.jspider.core.storage.jdbc;

import net.javacoding.jspider.api.model.Resource;
import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.event.impl.*;
import net.javacoding.jspider.core.model.ResourceInternal;
import net.javacoding.jspider.core.model.SiteInternal;
import net.javacoding.jspider.core.storage.ResourceDAO;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.storage.exception.InvalidStateTransitionException;
import net.javacoding.jspider.core.logging.LogFactory;
import net.javacoding.jspider.core.logging.Log;
import net.javacoding.jspider.core.util.URLUtil;

import java.net.MalformedURLException;
import java.net.URL;
import java.sql.*;
import java.util.ArrayList;
import java.util.Date;

/**
 * $Id: ResourceDAOImpl.java,v 1.6 2003/04/05 17:16:26 vanrogu Exp $
 */
class ResourceDAOImpl implements ResourceDAO {

    public static final String ATTRIBUTE_ID = "id";
    public static final String ATTRIBUTE_SITE = "site";
    public static final String ATTRIBUTE_URL = "url";
    public static final String ATTRIBUTE_STATE = "state";
    public static final String ATTRIBUTE_MIME = "mimetype";
    public static final String ATTRIBUTE_TIME = "timems";
    public static final String ATTRIBUTE_SIZE = "size";
    public static final String ATTRIBUTE_HTTP_STATUS = "httpstatus";

    protected DBUtil dbUtil;
    protected Storage storage;
    protected Log log;

    public ResourceDAOImpl(Storage storage, DBUtil dbUtil) {
        this.storage = storage;
        this.dbUtil = dbUtil;
        this.log = LogFactory.getLog(ResourceDAOImpl.class);
    }

    public synchronized Resource registerURL(URL url) {
        Resource resource = find(url);
        if (resource == null) {
            Site site = storage.getSiteDAO().find(URLUtil.getSiteURL(url));
            if (site == null) {
                log.warn("unable to register resource " + url + " because Site object wasn't found");
            } else {
                resource = new ResourceInternal(storage, site, url, new Date(), null);
                save(resource);
            }
        }
        return resource;
    }

    public void registerURLReference(URL url, URL refererURL) {
        Resource resource = find(url);
        Statement st = null;
        ResultSet rs = null;
        if (refererURL != null) {
            Resource referer = find(refererURL);
            try {
                int from = ((ResourceInternal) referer).getId();
                int to = ((ResourceInternal) resource).getId();
                Connection connection = dbUtil.getConnection();

                st = connection.createStatement();
                rs = st.executeQuery("select count(*) from jspider_resource_reference where referer = " + from + " and referee = " + to);
                rs.next();
                if (rs.getInt(1) == 0) {
                    Statement st2 = connection.createStatement();
                    st2.executeUpdate("insert into jspider_resource_reference ( referer, referee, count ) values (" + from + "," + to + ", 1)");
                } else {
                    Statement st2 = connection.createStatement();
                    st2.executeUpdate("update jspider_resource_reference set count = count + 1 where referer = " + from + " and referee = " + to);
                }
            } catch (SQLException e) {
                log.error("SQLException", e);
            } finally {
                if (rs != null) {
                    try {
                        rs.close();
                    } catch (SQLException e) {
                        log.error("SQLException closing resultset", e);
                    }
                }
                if (st != null) {
                    try {
                        st.close();
                    } catch (SQLException e) {
                        log.error("SQLException closing statement", e);
                    }
                }
            }
        }
    }

    public Resource[] getAllResources() {
        ArrayList al = new ArrayList();
        Statement st = null;
        ResultSet rs = null;
        try {
            Connection connection = dbUtil.getConnection();
            st = connection.createStatement();
            rs = st.executeQuery("select * from jspider_resource");
            while (rs.next()) {
                al.add(createResourceFromRecord(rs));
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if (rs != null) {
                try {
                    rs.close();
                } catch (SQLException e) {
                    log.error("SQLException closing resultset", e);
                }
            }
            if (st != null) {
                try {
                    st.close();
                } catch (SQLException e) {
                    log.error("SQLException closing statement", e);
                }
            }
        }
        return (Resource[]) al.toArray(new Resource[al.size()]);
    }

    public Resource[] getReferers(Resource resource) {
        ArrayList al = new ArrayList();
        Statement st = null;
        ResultSet rs = null;
        try {
            Connection connection = dbUtil.getConnection();
            st = connection.createStatement();
            rs = st.executeQuery("select * from jspider_resource, jspider_resource_reference where jspider_resource.id = jspider_resource_reference.referer and jspider_resource_reference.referee = " + ((ResourceInternal) resource).getId());
            while (rs.next()) {
                al.add(createResourceFromRecord(rs));
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if (rs != null) {
                try {
                    rs.close();
                } catch (SQLException e) {
                    log.error("SQLException closing resultset", e);
                }
            }
            if (st != null) {
                try {
                    st.close();
                } catch (SQLException e) {
                    log.error("SQLException closing statement", e);
                }
            }
        }
        return (Resource[]) al.toArray(new Resource[al.size()]);
    }

    public Resource[] getReferences(Resource resource) {
        ArrayList al = new ArrayList();
        Statement st = null;
        ResultSet rs = null;
        try {
            Connection connection = dbUtil.getConnection();
            st = connection.createStatement();
            rs = st.executeQuery("select * from jspider_resource, jspider_resource_reference where jspider_resource.id = jspider_resource_reference.referee and jspider_resource_reference.referer = " + ((ResourceInternal) resource).getId());
            while (rs.next()) {
                al.add(createResourceFromRecord(rs));
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if (rs != null) {
                try {
                    rs.close();
                } catch (SQLException e) {
                    log.error("SQLException closing resultset", e);
                }
            }
            if (st != null) {
                try {
                    st.close();
                } catch (SQLException e) {
                    log.error("SQLException closing statement", e);
                }
            }
        }
        return (Resource[]) al.toArray(new Resource[al.size()]);
    }

    public Resource[] getBySite(Site site) {
        ArrayList al = new ArrayList();
        Statement st = null;
        ResultSet rs = null;
        try {
            Connection connection = dbUtil.getConnection();
            st = connection.createStatement();
            SiteInternal si = (SiteInternal) site;
            rs = st.executeQuery("select * from jspider_resource where site=" + si.getId());
            while (rs.next()) {
                al.add(createResourceFromRecord(rs));
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if (rs != null) {
                try {
                    rs.close();
                } catch (SQLException e) {
                    log.error("SQLException closing resultset", e);
                }
            }
            if (st != null) {
                try {
                    st.close();
                } catch (SQLException e) {
                    log.error("SQLException closing statement", e);
                }
            }
        }
        return (Resource[]) al.toArray(new Resource[al.size()]);
    }

    public Resource getResource(URL url) {
        return find(url);
    }

    public synchronized void setSpidered(URL url, URLSpideredOkEvent event) {
        ResourceInternal ri = (ResourceInternal) find(url);
        ri.setFetched(event.getHttpStatus(), event.getSize(), event.getTimeMs(), event.getMimeType(), null, event.getHeaders());
        save(ri);
        ri.setBytes(event.getBytes());
    }

    public synchronized void setIgnoredForParsing(URL url) throws InvalidStateTransitionException {
        Resource resource = find(url);
        ((ResourceInternal) resource).setParseIgnored();
        save(resource);
    }

    public synchronized void setIgnoredForFetching(URL url, URLFoundEvent event) throws InvalidStateTransitionException {
        Resource resource = find(url);
        ((ResourceInternal) resource).setFetchIgnored();
        save(resource);
    }

    public synchronized void setForbidden(URL url, URLFoundEvent event) throws InvalidStateTransitionException {
        Resource resource = find(url);
        ((ResourceInternal) resource).setForbidden();
        save(resource);
    }

    public synchronized void setError(URL url, ResourceParsedErrorEvent event) throws InvalidStateTransitionException {
        Resource resource = find(url);
        ((ResourceInternal) resource).setParseError();
        save(resource);
    }

    public synchronized void setParsed(URL url, ResourceParsedOkEvent event) throws InvalidStateTransitionException {
        Resource resource = find(url);
        ((ResourceInternal) resource).setParsed();
        save(resource);
    }

    public synchronized void setError(URL url, URLSpideredErrorEvent event) throws InvalidStateTransitionException {
        Resource resource = find(url);
        ((ResourceInternal) resource).setFetchError(event.getHttpStatus(), event.getHeaders());
        save(resource);
    }

    protected Resource find(URL url) {
        Resource resource = null;
        Statement st = null;
        ResultSet rs = null;
        if (url != null) {
            try {
                st = dbUtil.getConnection().createStatement();
                rs = st.executeQuery("select * from jspider_resource where url='" + url + "'");
                if (rs.next()) {
                    resource = createResourceFromRecord(rs);
                }
            } catch (SQLException e) {
                log.error("SQLException", e);
            } finally {
                if (rs != null) {
                    try {
                        rs.close();
                    } catch (SQLException e) {
                        log.error("SQLException closing resultset", e);
                    }
                }
                if (st != null) {
                    try {
                        st.close();
                    } catch (SQLException e) {
                        log.error("SQLException closing statement", e);
                    }
                }
            }
        }
        return resource;
    }

    public void save(Resource resource) {
        ResourceInternal ri = (ResourceInternal) resource;
        Connection connection = dbUtil.getConnection();
        StringBuffer sb = new StringBuffer();
        Statement st = null;
        if (find(resource.getURL()) == null) {
            sb.append("insert into jspider_resource (");
            sb.append("url,");
            sb.append("site,");
            sb.append("state,");
            sb.append("httpstatus,");
            sb.append("timems");
            sb.append(") values (");
            sb.append(DBUtil.format(ri.getURL()));
            sb.append(",");
            sb.append(DBUtil.format(ri.getSiteId()));
            sb.append(",");
            sb.append(DBUtil.format(ri.getState()));
            sb.append(",");
            sb.append(DBUtil.format(ri.getHttpStatusInternal()));
            sb.append(",");
            sb.append(DBUtil.format(ri.getTimeMsInternal()));
            sb.append(")");
        } else {
            sb.append("update jspider_resource set ");
            sb.append("state=");
            sb.append(DBUtil.format(ri.getState()));
            sb.append(",mimetype=");
            sb.append(DBUtil.format(ri.getMimeInternal()));
            sb.append(",httpstatus=");
            sb.append(DBUtil.format(ri.getHttpStatusInternal()));
            sb.append(",size=");
            sb.append(DBUtil.format(ri.getSizeInternal()));
            sb.append(",timems=");
            sb.append(DBUtil.format(ri.getTimeMsInternal()));
            sb.append(" where id=");
            sb.append(DBUtil.format(ri.getId()));
        }
        try {
            st = connection.createStatement();
            st.executeUpdate(sb.toString());
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if ( st != null ) {
                try {
                    st.close();
                } catch (SQLException e) {
                    log.error("SQLException closing statement", e);
                }
            }
        }
    }

    protected Resource createResourceFromRecord(ResultSet rs) throws SQLException {
        int id = rs.getInt(ATTRIBUTE_ID);
        int siteId = rs.getInt(ATTRIBUTE_SITE);
        String urlString = rs.getString(ATTRIBUTE_URL);
        int state = rs.getInt(ATTRIBUTE_STATE);
        String mime = rs.getString(ATTRIBUTE_MIME);
        int time = rs.getInt(ATTRIBUTE_SIZE);
        int size = rs.getInt(ATTRIBUTE_TIME);
        int httpStatus = rs.getInt(ATTRIBUTE_HTTP_STATUS);
        URL url = null;
        try {
            url = new URL(urlString);
        } catch (MalformedURLException e) {
            log.error("MalformedURLException", e);
        }
        ResourceInternal ri = new ResourceInternal(storage, id, siteId, url, null, null);
        ri.setSize(size);
        ri.setTime(time);
        ri.setState(state);
        ri.setMime(mime);
        ri.setHttpStatus(httpStatus);
        return ri;
    }

}
