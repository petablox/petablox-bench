package net.javacoding.jspider.core.storage.memory;

import net.javacoding.jspider.core.storage.ContentDAO;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.api.model.FetchedResource;
import net.javacoding.jspider.api.model.Resource;

import java.io.InputStream;
import java.io.ByteArrayInputStream;
import java.util.Map;
import java.util.HashMap;

/**
 * $Id: ContentDAOImpl.java,v 1.1 2003/04/04 20:06:13 vanrogu Exp $
 */
class ContentDAOImpl implements ContentDAO {

    protected Map contents;
    protected Storage storage;

    public ContentDAOImpl ( Storage storage ) {
        this.storage = storage;
        this.contents = new HashMap ( );
    }

    public InputStream getInputStream(FetchedResource resource) {
        byte[] bytes = (byte[]) contents.get(resource.getURL());
        return new ByteArrayInputStream ( bytes );
    }

    public void setBytes(Resource resource, byte[] bytes) {
        contents.put(resource.getURL(), bytes);
    }
}
