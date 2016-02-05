package net.javacoding.jspider.core.task;

import net.javacoding.jspider.core.exception.TaskAssignmentException;
import net.javacoding.jspider.core.task.work.DecideOnSpideringTask;

import java.net.URL;
import java.util.*;


/**
 * Interface that will be implemented upon each object that will act as a task
 * scheduler.
 * The Task scheduler will keep track of all work that is being done and all
 * tasks that still have to be carried out.
 *
 * $Id: Scheduler.java,v 1.9 2003/04/03 15:57:18 vanrogu Exp $
 *
 * @author  Günther Van Roey
 */
public interface Scheduler {

    /**
     * Schedules a Worker Task to be executed.  The scheduler will keep a
     * reference to the task and return it later on to be processed.
     * @param task task to be scheduled
     */
    public void schedule(WorkerTask task);


    public void block( URL siteURL, DecideOnSpideringTask task);

    public DecideOnSpideringTask[] unblock(URL siteURL);

    /**
     * Flags a task as done.  This way, we are able to remove the task from
     * the in-process list.
     * @param task task that was completed
     */
    public void flagDone(WorkerTask task);

    public WorkerTask getThinkerTask() throws TaskAssignmentException;

    /**
     * Returns a fetch task to be processed
     * @return Task to be carried out
     * @throws TaskAssignmentException if all the work is done or no suitable
     * items are found for the moment.
     */
    public WorkerTask getFethTask() throws TaskAssignmentException;


    /**
     * Determines whether all the tasks are done.   If there are no more tasks
     * scheduled for process, and no ongoing tasks, it is impossible that new
     * work will arrive, so the spidering is done.
     * @return boolean value determining whether all work is done
     */
    public boolean allTasksDone();

    public int getBlockedCount( );

    public int getAssignedCount( );

    public int getJobCount ( );

    public int getThinkerJobCount ( );

    public int getSpiderJobCount ( );

    public int getJobsDone ( );

    public int getSpiderJobsDone ( );

    public int getThinkerJobsDone ( );

    public void setCanStop ( boolean canStop );

}
