package net.javacoding.jspider.core.storage.jdbc;

import net.javacoding.jspider.core.storage.ContentDAO;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.model.ResourceInternal;
import net.javacoding.jspider.core.logging.Log;
import net.javacoding.jspider.core.logging.LogFactory;
import net.javacoding.jspider.api.model.FetchedResource;
import net.javacoding.jspider.api.model.Resource;

import java.io.InputStream;
import java.io.ByteArrayInputStream;
import java.sql.*;

/**
 * $Id: ContentDAOImpl.java,v 1.2 2003/04/05 17:16:26 vanrogu Exp $
 */
class ContentDAOImpl implements ContentDAO {

    protected Log log;

    protected DBUtil dbUtil;
    protected Storage storage;

    public ContentDAOImpl ( Storage storage, DBUtil dbUtil ) {
        this.log = LogFactory.getLog(ContentDAO.class);
        this.dbUtil = dbUtil;
        this.storage = storage;
    }

    public InputStream getInputStream(FetchedResource resource) {
        byte[] bytes = getBytes((ResourceInternal)resource);
        return new ByteArrayInputStream ( bytes );
    }

    public void setBytes(Resource resource, byte[] bytes) {
        saveBytes((ResourceInternal)resource, bytes);
    }

    protected void saveBytes ( ResourceInternal resource, byte[] bytes ) {
        try {
            Connection connection = dbUtil.getConnection();
            PreparedStatement ps = connection.prepareStatement("insert into jspider_content ( id, content ) values ( ?, ? )");
            ps.setInt(1, resource.getId());
            ps.setBytes(2, bytes);
            try {
                ps.execute();
            } catch (IllegalArgumentException e) {
                log.error("IllegalArgumentException", e);
            } finally {
                ps.close ( );
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        }
    }

    protected byte[] getBytes ( ResourceInternal resource ) {
        byte[] bytes = null;
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            Connection connection = dbUtil.getConnection();
            ps = connection.prepareStatement("select content from jspider_content where id=?");
            ps.setInt(1, resource.getId());
            rs = ps.executeQuery();
            if ( rs.next() ) {
              bytes = rs.getBytes("content");
            }
        } catch (SQLException e) {
            log.error("SQLException", e);
        } finally {
            if ( rs != null ) {
                try {
                    rs.close();
                } catch (SQLException e) {
                    log.error("SQLException closing recordset", e );
                }
            }
            if ( ps != null ) {
                try {
                    ps.close();
                } catch (SQLException e) {
                    log.error("SQLException closing PreparedStatement", e );
                }
            }
        }
        return bytes;
    }

}
