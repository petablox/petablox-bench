package net.javacoding.jspider.core.task.work;

import net.javacoding.jspider.Constants;
import net.javacoding.jspider.api.model.HTTPHeader;
import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.logging.LogFactory;
import net.javacoding.jspider.core.event.CoreEvent;
import net.javacoding.jspider.core.event.impl.*;
import net.javacoding.jspider.core.task.SpiderWorkerTask;
import net.javacoding.jspider.core.util.http.HTTPHeaderUtil;

import java.io.*;
import java.net.*;

/**
 * $Id: FetchRobotsTXTTaskImpl.java,v 1.16 2003/04/02 20:55:20 vanrogu Exp $
 */
public class FetchRobotsTXTTaskImpl extends BaseWorkerTaskImpl implements SpiderWorkerTask{

    protected URL url;
    protected String userAgent;

    public FetchRobotsTXTTaskImpl(SpiderContext context, URL url, String userAgent) {
        super(context);
        this.userAgent = userAgent;
        this.url = url;
    }

    public void prepare() {
    }

    public void execute() {

        /*CoreEvent event = null;
        URLConnection connection = null;

        InputStream inputStream = null;

        int httpStatus = 0;
        HTTPHeader[] headers = null;

        try {
            connection = url.openConnection();

            // should follow redirects for Robots.txt ??? (eg: Amazon.com seems to use a 302 to a custom page instead of serving a robots.txt)
            ((HttpURLConnection) connection).setInstanceFollowRedirects(true);
            connection.setRequestProperty("User-agent", context.getUserAgent() );
            context.preHandle(connection);

            long start = System.currentTimeMillis();
            connection.connect();

            if (connection instanceof HttpURLConnection) {
                httpStatus = ((HttpURLConnection) connection).getResponseCode();
                switch (httpStatus) {
                    case HttpURLConnection.HTTP_MOVED_PERM:
                    case HttpURLConnection.HTTP_MOVED_TEMP:
                        return;
                    default:
                        break;
                }
            }
            inputStream = connection.getInputStream();

            ByteArrayOutputStream os = new ByteArrayOutputStream();
            InputStream is = new BufferedInputStream(inputStream);
            try {
                    int i = is.read();
                    while (i != -1) {
                        os.write(i);
                        i = is.read();
                    }
            } catch (IOException e) {
                LogFactory.getLog(FetchRobotsTXTTaskImpl.class).error("i/o exception during fetch robots.txt",e);
            }
            String contentType = connection.getContentType();
            int size = connection.getContentLength();
            int timeMs = (int) (System.currentTimeMillis() - start);

            headers = HTTPHeaderUtil.getHeaders(connection);

            if (httpStatus >= 200 && httpStatus < 303) {
                event = new RobotsTXTSpideredOkEvent(url,context, url, httpStatus, connection, contentType, timeMs, size, os.toByteArray(), headers);
            } else if (httpStatus >= 400 && httpStatus < 500) {
                event = new RobotsTXTUnexistingEvent(url,context, url, httpStatus, connection, headers, null);
            } else {
                event = new RobotsTXTSpideredErrorEvent(url,context, url, httpStatus, connection, headers, null);
            }
        } catch (FileNotFoundException e) {
            headers = HTTPHeaderUtil.getHeaders(connection);
            event = new RobotsTXTUnexistingEvent(url,context, url, 404, connection, headers, e);
        } catch (Exception e) {
            event = new RobotsTXTSpideredErrorEvent(url,context, url, httpStatus, connection, headers, e);
        } finally {
            notifyEvent(context, url, event);
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException e) {
                    LogFactory.getLog(FetchRobotsTXTTaskImpl.class).error("i/o exception closing inputstream",e);
                }
            }
        }*/
    }


    protected void notifyEvent(SpiderContext context, URL url, CoreEvent event) {
      context.getAgent().registerEvent(url, event);
    }

}
