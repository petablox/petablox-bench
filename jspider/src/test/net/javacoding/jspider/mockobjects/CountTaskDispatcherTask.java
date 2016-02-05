package net.javacoding.jspider.mockobjects;

import net.javacoding.jspider.core.SpiderContext;
import net.javacoding.jspider.core.task.dispatch.BaseDispatchTaskImpl;
import net.javacoding.jspider.core.threading.WorkerThreadPool;
import net.javacoding.jspider.mockobjects.util.Counter;

/**
 * $Id: CountTaskDispatcherTask.java,v 1.3 2003/03/27 17:44:31 vanrogu Exp $
 */
public class CountTaskDispatcherTask extends BaseDispatchTaskImpl {

    protected WorkerThreadPool pool;
    protected Counter counter;
    protected int number;

    public CountTaskDispatcherTask ( SpiderContext context, WorkerThreadPool pool, Counter counter, int number ) {
        super ( context );
        this.counter = counter;
        this.pool = pool;
        this.number = number;
    }

    public void execute() {
        for ( int i = 0; i < number; i++ ) {
            pool.assign(new CountTask(counter));
        }
    }

}
