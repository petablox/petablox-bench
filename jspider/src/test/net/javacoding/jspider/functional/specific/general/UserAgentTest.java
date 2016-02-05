package net.javacoding.jspider.functional.specific.general;

import junit.framework.TestCase;
import net.javacoding.jspider.Constants;
import net.javacoding.jspider.JSpider;
import net.javacoding.jspider.api.event.EventSink;
import net.javacoding.jspider.api.event.JSpiderEvent;
import net.javacoding.jspider.api.event.resource.ResourceFetchedEvent;
import net.javacoding.jspider.core.util.config.*;
import net.javacoding.jspider.mockobjects.OverridingJSpiderConfiguration;
import net.javacoding.jspider.mockobjects.OverridingPropertySet;
import net.javacoding.jspider.mockobjects.plugin.JUnitEventSink;

import java.io.*;
import java.net.URL;

/**
 * $Id: UserAgentTest.java,v 1.7 2003/04/03 15:57:26 vanrogu Exp $
 *
 * @todo add test for userAgent on site-level
 */
public class UserAgentTest extends TestCase implements EventSink {

    public final String TEST_URL="http://j-spider.sourceforge.net/testcases/specific/general/testUserAgent.php";

    protected JUnitEventSink sink;
    protected JSpiderConfiguration config;
    protected JSpiderConfiguration config2;

    protected String userAgent;

    /**
     * Public constructor giving a name to the test.
     */
    public UserAgentTest ( ) {
        super ( "UserAgentTest ");
    }

    /**
     * JUnit's overridden setUp method
     * @throws java.lang.Exception in case something fails during setup
     */
    protected void setUp() throws Exception {
        System.err.println("setUp");
        userAgent = null;
        config = ConfigurationFactory.getConfiguration(ConfigurationFactory.CONFIG_UNITTEST);
        config2 = new OverridingJSpiderConfiguration ( config );
        ((OverridingPropertySet)config2.getJSpiderConfiguration()).setValue("jspider.userAgent", "JSpiderUnitTest");
        ConfigurationFactory.setConfiguration(config);
        sink = JUnitEventSink.getInstance();
        sink.setOtherSink(this);
    }

    /**
     * JUnit's overridden tearDown method
     * @throws java.lang.Exception in case something fails during tearDown
     */
    protected void tearDown() throws Exception {
        System.err.println("tearDown");
        ConfigurationFactory.cleanConfiguration();
        sink.reset();
    }

    public void testUserAgentNormalAgent ( ) throws Exception {
        URL url = new URL ( TEST_URL );
        ConfigurationFactory.setConfiguration(config);

        JSpider jspider = new JSpider ( url );
        jspider.start ( );
        String actual = userAgent;
        String expected= ConfigurationFactory.getConfiguration().getJSpiderConfiguration().getString(ConfigConstants.CONFIG_USERAGENT, Constants.USERAGENT );
        System.err.println("actual: " + actual );
        System.err.println("expected: " + expected);
        assertEquals(expected, actual);
    }

    public void testUserAgentTestAgent ( ) throws Exception {
        URL url = new URL ( TEST_URL );
        ConfigurationFactory.setConfiguration(config2);

        JSpider jspider = new JSpider ( url );
        jspider.start ( );

        String actual = userAgent;
        String expected= ConfigurationFactory.getConfiguration().getJSpiderConfiguration().getString(ConfigConstants.CONFIG_USERAGENT, Constants.USERAGENT );
        System.err.println("actual: " + actual );
        System.err.println("expected: " + expected);
        assertEquals(expected, actual);
    }

    public void notify(JSpiderEvent event) {
        if ( event instanceof ResourceFetchedEvent ) {
            ResourceFetchedEvent e = (ResourceFetchedEvent) event;
            if ( e.getResource().getURL().toString().equalsIgnoreCase(TEST_URL) ) {
            InputStream is = e.getResource().getInputStream();
            BufferedReader br = new BufferedReader ( new InputStreamReader ( is ) );
            try {
                String line = br.readLine();
                while ( line != null ) {
                    userAgent = line;
                    line = br.readLine();
                }
            } catch (IOException e1) {
                e1.printStackTrace();
            }
            }
        }

    }

    public void initialize() {
    }

    public void shutdown() {
    }
}
