package net.javacoding.jspider;


/**
 * Interface with some constants we need.
 *
 * $Id: Constants.java,v 1.9 2003/02/14 21:06:26 vanrogu Exp $
 *
 * @author Günther Van Roey
 */
public interface Constants {

    /** Version of this source. */
    public static final String VERSION = "@jspider.version.number@";


    /** Versionstring for this source. */
    public static final String VERSIONSTRING = "@jspider.version.string@";


    /** Versionstring for this source. */
    public static final String BUILDTIMESTAMP = "@build.DSTAMP@";



    /**
     * Useragent for this build.
     */
    public static final String USERAGENT = "JSpider v" + VERSION + " (http://j-spider.sourceforge.net)";

}