package net.javacoding.jspider.core.task.work;


import net.javacoding.jspider.api.event.resource.ResourceForbiddenEvent;
import net.javacoding.jspider.api.event.resource.ResourceIgnoredForFetchingEvent;
import net.javacoding.jspider.api.model.Decision;
import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.Agent;
import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.dispatch.EventDispatcher;
import net.javacoding.jspider.core.event.impl.URLFoundEvent;
import net.javacoding.jspider.core.rule.Ruleset;
import net.javacoding.jspider.core.storage.Storage;
import net.javacoding.jspider.core.task.ThinkerWorkerTask;
import net.javacoding.jspider.core.util.URLUtil;

import java.net.MalformedURLException;
import java.net.URL;


/**
 *
 * $Id: DecideOnSpideringTask.java,v 1.19 2003/04/04 20:06:16 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class DecideOnSpideringTask extends BaseWorkerTaskImpl implements ThinkerWorkerTask {


    protected URLFoundEvent event;
    protected EventDispatcher eventDispatcher;
    protected Storage storage;

    public DecideOnSpideringTask(SpiderContext context, URLFoundEvent urlFoundEvent) {
        super(context);
        this.event = urlFoundEvent;
        this.eventDispatcher = context.getEventDispatcher();
        this.storage = context.getStorage();
    }

    public void prepare() {
    }

    public synchronized void execute() {
        Agent agent = context.getAgent();

        URL url = event.getURL();
        URL foundURL = event.getFoundURL();

        URL siteURL = null;
        try {
            siteURL = new URL("http", foundURL.getHost(), foundURL.getPort(), "/");
        } catch (MalformedURLException e) {
        }

        URL currentSiteURL = URLUtil.getSiteURL(url);
        Site currentSite = null;
        if ( currentSiteURL != null ) {
            currentSite = storage.getSiteDAO().find(currentSiteURL);
        }
        Site site = storage.getSiteDAO().find(URLUtil.getSiteURL(siteURL));

        Ruleset spiderRules = context.getSiteSpiderRules(site);
        Decision spiderDecision = spiderRules.applyRules(context, currentSite, foundURL);

        storage.getDecisionDAO().saveSpiderDecision(storage.getResourceDAO().getResource(foundURL), spiderDecision);

        switch (spiderDecision.getDecision()) {
            case Decision.RULE_IGNORE:
                storage.getResourceDAO().setIgnoredForFetching(foundURL, event);
                eventDispatcher.dispatch(new ResourceIgnoredForFetchingEvent(storage.getResourceDAO().getResource(foundURL)));
                break;
            case Decision.RULE_FORBIDDEN:
                storage.getResourceDAO().setForbidden(foundURL, event);
                eventDispatcher.dispatch(new ResourceForbiddenEvent(storage.getResourceDAO().getResource(foundURL)));
                break;
            case Decision.RULE_ACCEPT:
            case Decision.RULE_DONTCARE:
            default:
                agent.scheduleForSpidering(foundURL);
                break;
        }
    }

}


