package net.javacoding.jspider.core.storage;

import net.javacoding.jspider.api.model.FetchedResource;
import net.javacoding.jspider.api.model.Resource;

import java.io.InputStream;

/**
 * $Id: ContentDAO.java,v 1.1 2003/04/04 20:06:09 vanrogu Exp $
 */
public interface ContentDAO {

    public InputStream getInputStream ( FetchedResource resource );

    /**
     * @todo maybe change to getOutputStream() someday?
     */
    public void setBytes ( Resource resource, byte[] bytes );

}
