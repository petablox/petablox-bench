package net.javacoding.jspider.core.task;


/**
 *
 * $Id: WorkerTask.java,v 1.3 2003/02/16 11:12:06 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public interface WorkerTask extends Task {

    /**
     * Allows some work to be done before the actual Task is carried out.
     * During the invocation of prepare, the WorkerThread's state will be
     * WORKERTHREAD_BLOCKED.
     */
    public void prepare ( );

    /**
     * Allows us to put common code in the abstract base class.
     */
    public void tearDown ( );
}
