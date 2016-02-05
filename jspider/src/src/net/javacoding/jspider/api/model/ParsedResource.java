package net.javacoding.jspider.api.model;


/**
 *
 * $Id: ParsedResource.java,v 1.1.1.1 2002/11/20 17:02:32 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public interface ParsedResource extends FetchedResource {

    public Resource[] getReferencedResources();

}
