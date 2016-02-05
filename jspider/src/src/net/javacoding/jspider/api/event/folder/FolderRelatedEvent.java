package net.javacoding.jspider.api.event.folder;


import net.javacoding.jspider.api.event.EventVisitor;
import net.javacoding.jspider.api.event.JSpiderEvent;
import net.javacoding.jspider.api.model.Folder;


/**
 *
 * $Id: FolderRelatedEvent.java,v 1.1.1.1 2002/11/20 17:02:31 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public abstract class FolderRelatedEvent extends JSpiderEvent {

    protected Folder folder;

    public FolderRelatedEvent(Folder folder) {
        this.folder = folder;
    }

    public Folder getFolder() {
        return folder;
    }

    public void accept(EventVisitor visitor) {
        visitor.visit(this);
    }
}
