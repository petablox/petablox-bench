package net.javacoding.jspider.core.storage.jdbc;


import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.storage.StorageProvider;
import net.javacoding.jspider.core.util.config.PropertySet;


/**
 *
 * $Id: JdbcStorageProvider.java,v 1.1 2003/03/23 09:41:21 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class JdbcStorageProvider implements StorageProvider {
    public Storage createStorage(PropertySet props) {
        return new JdbcStorageImpl(props);
    }
}
