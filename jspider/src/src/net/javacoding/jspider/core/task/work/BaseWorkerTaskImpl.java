package net.javacoding.jspider.core.task.work;


import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.task.WorkerTask;


/**
 *
 * $Id: BaseWorkerTaskImpl.java,v 1.2 2003/02/16 11:12:06 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public abstract class BaseWorkerTaskImpl implements WorkerTask {

    protected SpiderContext context;

    public BaseWorkerTaskImpl(SpiderContext context) {
        this.context = context;
    }

    public void tearDown() {
        context.getAgent().flagDone(this);
    }
}
