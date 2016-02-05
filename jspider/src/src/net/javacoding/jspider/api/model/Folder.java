package net.javacoding.jspider.api.model;


/**
 *
 * $Id: Folder.java,v 1.1.1.1 2002/11/20 17:02:32 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public interface Folder {

    public Site getSite();

    public String getName();

    public Folder getParent();

    public Resource[] getResources();

    public int getResourceCount();

    public int getFolderCount();

}
