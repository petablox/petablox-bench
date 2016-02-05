package net.javacoding.jspider.core.storage.jdbc;

import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.model.SiteInternal;
import net.javacoding.jspider.core.storage.SiteDAO;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.logging.LogFactory;
import net.javacoding.jspider.core.logging.Log;

import java.net.MalformedURLException;
import java.net.URL;
import java.sql.*;
import java.util.ArrayList;

/**
 * $Id: SiteDAOImpl.java,v 1.6 2003/04/05 17:16:26 vanrogu Exp $
 */
class SiteDAOImpl implements SiteDAO {

    public static final String ATTRIBUTE_ID= "id";
    public static final String ATTRIBUTE_HOST = "host";
    public static final String ATTRIBUTE_PORT = "port";
    public static final String ATTRIBUTE_STATE = "state";
    public static final String ATTRIBUTE_OBEYROBOTSTXT = "obeyrobotstxt";
    public static final String ATTRIBUTE_USEPROXY = "useproxy";
    public static final String ATTRIBUTE_USECOOKIES = "usecookies";
    public static final String ATTRIBUTE_HASROBOTSTXT = "hasrobotstxt";

    protected DBUtil dbUtil;
    protected Storage storage;
    protected Log log;

    public SiteDAOImpl ( Storage storage, DBUtil dbUtil ) {
        this.storage = storage;
        this.dbUtil = dbUtil;
        this.log = LogFactory.getLog(SiteDAOImpl.class);
    }

    public Site find(URL siteURL) {
        Site site = null;
        Statement st = null;
        ResultSet rs = null;
        try {
            Connection c = dbUtil.getConnection ( );
            st = c.createStatement();
            rs = st.executeQuery("select * from jspider_site where host = '" + siteURL.getHost() + "' and port = " + siteURL.getPort());
            if ( rs.next() ) {
                site = createSiteFromRecord(rs);
            } else {
                return null;
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if ( rs != null ) {
                try {
                    rs.close();
                } catch (SQLException e) {
                    log.error("SQLException closing resultset", e);
                }
            }
            if ( st != null ) {
                try {
                    st.close();
                } catch (SQLException e) {
                    log.error("SQLException closing statement", e);
                }
            }
        }
        return site;
    }

    public void save(Site site) {
        Connection connection = dbUtil.getConnection();
        StringBuffer sb = new StringBuffer ( );
        Statement st = null;

        if ( find ( site.getURL() ) == null  ) {
            sb.append("insert into jspider_site (");
            sb.append("host,");
            sb.append("port,");
            sb.append("robotstxthandled,");
            sb.append("usecookies,");
            sb.append("useproxy,");
            sb.append("state,");
            sb.append("obeyrobotstxt");
            sb.append(") values (");
            sb.append(DBUtil.format(site.getHost()));
            sb.append(",");
            sb.append(DBUtil.format(site.getPort()));
            sb.append(",");
            sb.append(DBUtil.format(site.isRobotsTXTHandled()));
            sb.append(",");
            sb.append(DBUtil.format(site.getUseCookies()));
            sb.append(",");
            sb.append(DBUtil.format(site.getUseProxy()));
            sb.append(",");
            sb.append(DBUtil.format(site.getState()));
            sb.append(",");
            sb.append(DBUtil.format(site.getObeyRobotsTXT()));
            sb.append(")");
        } else {
            sb.append("update jspider_site set ");
            sb.append("robotstxthandled=");
            sb.append(DBUtil.format(site.isRobotsTXTHandled()));
            sb.append(",usecookies=");
            sb.append(DBUtil.format(site.getUseCookies()));
            sb.append(",useproxy=");
            sb.append(DBUtil.format(site.getUseProxy()));
            sb.append(",state=");
            sb.append(DBUtil.format(site.getState()));
            sb.append(",obeyrobotstxt=");
            sb.append(DBUtil.format(site.getObeyRobotsTXT()));
            sb.append( " where id = ");
            sb.append(DBUtil.format(((SiteInternal)site).getId()));
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

    public Site[] findAll() {
        ArrayList al = new ArrayList ( );
        Statement st = null;
        ResultSet rs = null;
        try {
            Connection c = dbUtil.getConnection ( );
            st = c.createStatement();
            rs = st.executeQuery("select * from jspider_site" );

            while ( rs.next() ) {
                al.add(createSiteFromRecord(rs));
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if ( rs != null ) {
                try {
                    rs.close();
                } catch (SQLException e) {
                    log.error("SQLException closing resultset", e);
                }
            }
            if ( st != null ) {
                try {
                    st.close();
                } catch (SQLException e) {
                    log.error("SQLException closing statement", e);
                }
            }
        }
        return (Site[]) al.toArray(new Site[al.size()]);
    }


    protected Site createSiteFromRecord ( ResultSet rs ) throws SQLException {
        String host = rs.getString(ATTRIBUTE_HOST);
        int id = rs.getInt(ATTRIBUTE_ID);
        int port = rs.getInt(ATTRIBUTE_PORT);
        int state = rs.getInt(ATTRIBUTE_STATE);
        boolean obeyRobotsTXT = rs.getInt(ATTRIBUTE_OBEYROBOTSTXT) != 0;
        boolean useProxy = rs.getInt(ATTRIBUTE_USEPROXY) != 0;
        boolean useCookies  = rs.getInt(ATTRIBUTE_USECOOKIES) != 0;

        URL url = null;
        try {
            url = new URL ( "http", host, port, "" );
        } catch (MalformedURLException e) {
            e.printStackTrace();
        }

        SiteInternal si = new SiteInternal ( storage, id, url, state, obeyRobotsTXT, useProxy, useCookies );
        return si;
    }


}
