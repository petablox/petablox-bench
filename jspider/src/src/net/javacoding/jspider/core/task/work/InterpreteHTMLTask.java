package net.javacoding.jspider.core.task.work;


import net.javacoding.jspider.api.model.FetchedResource;
import net.javacoding.jspider.api.event.resource.MalformedURLFoundEvent;
import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.logging.LogFactory;
import net.javacoding.jspider.core.event.CoreEvent;
import net.javacoding.jspider.core.event.impl.*;
import net.javacoding.jspider.core.task.ThinkerWorkerTask;
import net.javacoding.jspider.core.util.html.URLFinder;
import net.javacoding.jspider.core.util.html.URLFinderCallback;
import net.javacoding.jspider.core.util.URLUtil;

import java.io.*;
import java.net.URL;


/**
 *
 * $Id: InterpreteHTMLTask.java,v 1.11 2003/04/02 20:55:21 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public class InterpreteHTMLTask extends BaseWorkerTaskImpl implements ThinkerWorkerTask, URLFinderCallback {

    protected FetchedResource spideredResource;
    protected URL url;

    public InterpreteHTMLTask(SpiderContext context, FetchedResource resource) {
        super(context);
        this.spideredResource = resource;
        url = spideredResource.getURL();
    }

    public void prepare() {
    }

    public void execute() {
        CoreEvent event = null;
        try {
            InputStream inputStream = spideredResource.getInputStream();
            BufferedReader br = new BufferedReader(new InputStreamReader(inputStream));
            String line = br.readLine();
            while (line != null) {
                URLFinder.findURLs(this, url, line);
                line = br.readLine();
            }
            event = new ResourceParsedOkEvent(context, url);
        } catch (IOException e) {
            LogFactory.getLog(InterpreteHTMLTask.class).error("i/o exception during parse",e);
            event = new ResourceParsedErrorEvent(context, url, e);
        } catch (Exception e) {
            LogFactory.getLog(InterpreteHTMLTask.class).error("exception during parse",e);
            event = new ResourceParsedErrorEvent(context, url, e);
        } finally {
            context.getAgent().registerEvent(url, event);
        }
    }

    public void urlFound(URL foundURL) {
        context.getAgent().registerEvent(url, new URLFoundEvent(context, url, URLUtil.normalize(foundURL)));
    }

    public void malformedUrlFound(String malformedURL) {
        context.getEventDispatcher().dispatch(new MalformedURLFoundEvent(context.getStorage().getResourceDAO().getResource(url), malformedURL ));
    }

}


