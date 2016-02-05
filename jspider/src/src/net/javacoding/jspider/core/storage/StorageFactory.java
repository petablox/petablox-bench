package net.javacoding.jspider.core.storage;


import net.javacoding.jspider.core.logging.LogFactory;
import net.javacoding.jspider.core.logging.Log;
import net.javacoding.jspider.core.storage.memory.InMemoryStorageProvider;
import net.javacoding.jspider.core.util.config.*;


/**
 *
 * $Id: StorageFactory.java,v 1.6 2003/04/02 20:55:14 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class StorageFactory {

    public Storage createStorage() {

        PropertySet props = ConfigurationFactory.getConfiguration().getJSpiderConfiguration();

        Log log = LogFactory.getLog(StorageFactory.class);

        PropertySet storageProps = new MappedPropertySet ( ConfigConstants.CONFIG_STORAGE, props );
        Class providerClass = storageProps.getClass(ConfigConstants.CONFIG_STORAGE_PROVIDER, InMemoryStorageProvider.class);
        log.info("Storage provider class is '" + providerClass + "'");

        try {
            StorageProvider provider = (StorageProvider) providerClass.newInstance();
            PropertySet storageConfigProps = new MappedPropertySet(ConfigConstants.CONFIG_STORAGE_CONFIG, storageProps);
            return provider.createStorage(storageConfigProps);
        } catch (InstantiationException e) {
            log.error("InstantiationException on Storage", e);
            return null;
        } catch (IllegalAccessException e) {
            log.error("IllegalAccessException on Storage", e);
            return null;
        }
    }
}
