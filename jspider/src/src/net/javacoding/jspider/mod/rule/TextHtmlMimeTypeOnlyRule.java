package net.javacoding.jspider.mod.rule;

import net.javacoding.jspider.api.model.*;
import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.rule.impl.BaseRuleImpl;
import net.javacoding.jspider.core.model.DecisionInternal;

import java.net.URL;

/**
 * $Id: TextHtmlMimeTypeOnlyRule.java,v 1.1 2003/04/03 16:10:52 vanrogu Exp $
 */
public class TextHtmlMimeTypeOnlyRule extends BaseRuleImpl {

    public Decision apply(SpiderContext context, Site currentSite, URL url) {
        FetchedResource resource = (FetchedResource)context.getStorage().getResourceDAO().getResource(url);
        String mime = resource.getMime();
        Decision decision = new DecisionInternal(Decision.RULE_IGNORE, "mimetype is '" + mime + "' - resource ignored");

        if (mime != null && mime.toLowerCase().indexOf("text/html") > -1) { // can also contain charset info
            decision = new DecisionInternal(Decision.RULE_ACCEPT, "mimetype is '" + mime + "' - resource accepted");
        }

        return decision;
    }
}
