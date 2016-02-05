package net.javacoding.jspider.api.event.resource;


import net.javacoding.jspider.api.event.EventVisitor;
import net.javacoding.jspider.api.model.FetchErrorResource;
import net.javacoding.jspider.api.model.Resource;


/**
 *
 * $Id: ResourceFetchErrorEvent.java,v 1.4 2003/04/01 19:44:35 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class ResourceFetchErrorEvent extends ResourceRelatedEvent {

    protected int httpStatus;

    public ResourceFetchErrorEvent(Resource resource, int HttpStatus) {
        super(resource);
        this.httpStatus = httpStatus;
    }

    public FetchErrorResource getResource() {
        return (FetchErrorResource) resource;
    }

    public int getHttpStatus ( ) {
        return httpStatus;
    }

    public String getComment() {
        return "resource " + resource.getURL() + " couldn't be fetched [" + httpStatus + "]";
    }

    public void accept(EventVisitor visitor) {
        visitor.visit(this);
    }

    public boolean isError() {
        return true;
    }
}
