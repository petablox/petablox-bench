package net.javacoding.jspider.tool.util;

import net.javacoding.jspider.tool.Tool;
import net.javacoding.jspider.tool.impl.*;

/**
 * $Id: ToolFactory.java,v 1.1 2003/03/25 16:25:09 vanrogu Exp $
 */
public class ToolFactory {

    public static Tool createTool ( String[] args ) {
        Tool tool = null;
        String toolName = getToolName ( args );
        if( toolName != null ) {
          tool = getTool ( toolName );
        }
        return tool;
    }

    protected static String getToolName ( String[] args ) {
        String toolName = null;
        for (int i = 0; i < args.length; i++) {
            String arg = args[i];
            if ( ! arg.startsWith("-") ) {
                toolName = arg;
                break;
            }
        }
        return toolName;
    }

    protected static Tool getTool ( String name ) {
        Tool tool = null;

        if ( "headers".equals ( name ) ) {
            tool = new HeadersTool();
        } else if ( "download".equals ( name ) ) {
            tool = new DownloadTool();
        } else if ( "info".equals ( name ) ) {
            tool = new InfoTool();
        } else if ( "fetch".equals ( name ) ) {
            tool = new FetchTool();
        } else if ( "findlinks".equals ( name ) ) {
            tool = new FindLinksTool();
        }

        return tool;
    }

}
