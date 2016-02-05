package net.javacoding.jspider.mod.rule;

import net.javacoding.jspider.api.model.Decision;
import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.rule.impl.BaseRuleImpl;
import net.javacoding.jspider.core.model.DecisionInternal;

import java.net.URL;

/**
 * Rule implementation that only accepts a resource URL if it is external to
 * the site currently being spidered.
 *
 * $Id: ExternallyReferencedOnlyRule.java,v 1.1 2003/04/03 16:10:50 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class ExternallyReferencedOnlyRule extends BaseRuleImpl {

    public Decision apply(SpiderContext context, Site currentSite, URL url) {
        if (currentSite == null) {
            return new DecisionInternal(Decision.RULE_DONTCARE);
        } else {
            if (currentSite.getHost().equalsIgnoreCase(url.getHost())) {
                return new DecisionInternal(Decision.RULE_IGNORE, "url is within same site - not ignored");
            } else {
                return new DecisionInternal(Decision.RULE_ACCEPT, "url is accepted because it is referenced from another site");
            }
        }
    }

}
