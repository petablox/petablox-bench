package net.javacoding.jspider.core.storage.memory;


import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.storage.StorageProvider;
import net.javacoding.jspider.core.util.config.PropertySet;


/**
 *
 * $Id: InMemoryStorageProvider.java,v 1.2 2003/03/23 09:41:21 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class InMemoryStorageProvider implements StorageProvider {
    public Storage createStorage(PropertySet props) {
        return new InMemoryStorageImpl();
    }
}
