package net.javacoding.jspider.api.event.site;


import net.javacoding.jspider.api.event.EventVisitor;
import net.javacoding.jspider.api.event.JSpiderEvent;
import net.javacoding.jspider.api.model.Site;


/**
 *
 * $Id: SiteRelatedEvent.java,v 1.2 2002/11/27 22:07:36 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public abstract class SiteRelatedEvent extends JSpiderEvent {

    protected Site site;

    public SiteRelatedEvent(Site site) {
        this.site = site;
    }

    public Site getSite() {
        return site;
    }

    public void accept(EventVisitor visitor) {
        visitor.visit(this);
    }
}
