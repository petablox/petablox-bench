package net.javacoding.jspider.mockobjects;

import net.javacoding.jspider.api.model.Site;
import net.javacoding.jspider.core.util.config.JSpiderConfiguration;
import net.javacoding.jspider.core.util.config.PropertySet;

import java.io.File;
import java.util.HashMap;
import java.util.Map;

/**
 * $Id: OverridingJSpiderConfiguration.java,v 1.5 2003/03/27 17:44:32 vanrogu Exp $
 */
public class OverridingJSpiderConfiguration implements JSpiderConfiguration {

    protected JSpiderConfiguration config;
    protected PropertySet jspiderConfiguration;
    protected PropertySet pluginsConfiguration;
    protected PropertySet defaultSiteConfiguration;
    protected Map pluginConfiguration;
    protected Map siteConfiguration;
    protected File defaultOutputFolder;

    public OverridingJSpiderConfiguration ( JSpiderConfiguration config ) {
        this.config = config;
        jspiderConfiguration = new OverridingPropertySet(config.getJSpiderConfiguration());
        pluginsConfiguration = new OverridingPropertySet(config.getPluginsConfiguration());
        defaultSiteConfiguration = new OverridingPropertySet(config.getDefaultSiteConfiguration());
        pluginConfiguration = new HashMap ( );
        siteConfiguration = new HashMap ( );
        defaultOutputFolder = new File ( System.getProperty("jspider.home") + File.separator + "output" );
    }

    public File getDefaultOutputFolder() {
        return defaultOutputFolder;
    }

    public PropertySet getJSpiderConfiguration() {
        return jspiderConfiguration;
    }

    public PropertySet getPluginsConfiguration() {
        return pluginsConfiguration;
    }

    public PropertySet getPluginConfiguration(String pluginName) {
        PropertySet retVal = (PropertySet)pluginConfiguration.get(pluginName);
        if ( retVal == null ) {
            retVal = new OverridingPropertySet(config.getPluginConfiguration(pluginName) );
            pluginConfiguration.put(pluginName, retVal);
        }
        return retVal;
    }

    public PropertySet getSiteConfiguration(Site site) {
        return getSiteConfiguration(site.getHost(), site.getPort());
    }

    public PropertySet getSiteConfiguration(String host, int port) {
        PropertySet retVal = (PropertySet)siteConfiguration.get("" + host + ":" +  port );
        if ( retVal == null ) {
            retVal = config.getSiteConfiguration(host, port);
            retVal = new OverridingPropertySet(retVal);
            siteConfiguration.put("" + host + ":" +  port, retVal);
        }
        return retVal;
    }

    public PropertySet getDefaultSiteConfiguration() {
        return defaultSiteConfiguration;
    }

    public File getPluginConfigurationFolder(String pluginName) {
        return config.getPluginConfigurationFolder(pluginName);
    }

}
