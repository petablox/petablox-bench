package net.javacoding.jspider.core.storage;

import net.javacoding.jspider.core.util.config.PropertySet;


/**
 *
 * $Id: StorageProvider.java,v 1.2 2003/03/23 09:41:21 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public interface StorageProvider {

    public Storage createStorage(PropertySet props);

}
