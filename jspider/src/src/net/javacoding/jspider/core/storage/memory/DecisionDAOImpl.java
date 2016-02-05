package net.javacoding.jspider.core.storage.memory;

import net.javacoding.jspider.core.storage.DecisionDAO;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.api.model.Resource;
import net.javacoding.jspider.api.model.Decision;

import java.util.Map;
import java.util.HashMap;

/**
 * $Id: DecisionDAOImpl.java,v 1.1 2003/04/04 20:06:13 vanrogu Exp $
 */
class DecisionDAOImpl implements DecisionDAO {

    protected Storage storage;

    protected Map spiderDecisions;
    protected Map parseDecisions;

    public DecisionDAOImpl ( Storage storage ) {
        this.storage = storage;
        this.spiderDecisions = new HashMap ( );
        this.parseDecisions = new HashMap ( );
    }

    public void saveSpiderDecision(Resource resource, Decision decision) {
        spiderDecisions.put(resource.getURL(), decision);
    }

    public void saveParseDecision(Resource resource, Decision decision) {
        parseDecisions.put(resource.getURL(), decision);
    }

    public Decision findSpiderDecision(Resource resource) {
        return (Decision)spiderDecisions.get(resource.getURL());
    }

    public Decision findParseDecision(Resource resource) {
        return (Decision)parseDecisions.get(resource.getURL());
    }

}
