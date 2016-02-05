/*
    Schroeder benchmarking harness
    Copyright (C) 1998-1999 David Veldhuizen <david@interlog.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/


import schroeder.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

public class SchroederBench {
	private static boolean verbose_ = false;
	private static void echo( String s ) {
		if( verbose_ ) {
			System.out.println( s );		
		}
	}

	public static void main( String[] args ) {
		// command-line launch
		try {
			// Parse args
			String src_filename = args[ 0 ];
			String dst_filename = args[ 1 ];
			if( args.length >= 3 ) {
				verbose_ = true;
			}

			// Load file format plug-ins
			echo( "Loading file format converters..." );
			SoundFileAdapterManager.instance().init();
	
			// Load transform and insert plug-ins
			echo( "Loading plug-ins..." );
			PluginManager.instance().init();
			
			// Open file
			File src_file = new File( src_filename );
			echo( "Opening " + src_file );
			SoundFileAdapter adapter = SoundFileAdapterManager.instance().getAdapter( src_file );
			if( adapter == null ) {
				echo( "No file format converter found. Using binary file converter." );
				adapter = new BinaryFileAdapter();
			}
			adapter.setFile( src_file );
			SoundModel model = adapter.createSoundFromFile();
			echo( "" + model );
			
			// Transform sound:
			PlugInParameters param = new PlugInParameters();

				// upsample to 24 bits
			param.set( "SampleSizeAction.sampleSize", Integer.toString( 24 ) );	
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );	// select all
			MonitoredAction sampleSize = SampleSizeAction.instance();
			echo( sampleSize.getNote() );
			model = sampleSize.transform( model, param, null, 0, 0 );
			echo( "" + model );

				// upsample to 48k sps
			param.set( "SampleRateAction.sampleRate", Integer.toString( 48000 ) );	
			param.set( "SampleRateAction.aliasingRequested", "false" );	
			param.set( "SampleRateAction.resampleRequested", "true" );
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );	// select all
			MonitoredAction sampleRate = SampleRateAction.instance();
			echo( sampleRate.getNote() );
			model = sampleRate.transform( model, param, null, 0, 0 );
			echo( "" + model );

				// reverse
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );
			MonitoredAction reverse = PluginManager.instance().getPlugin( "ReverseAction" );
			echo( reverse.getNote() );
			model = reverse.transform( model, param, null, 0, 0 );
			
				// normalize
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );
			MonitoredAction normalize = PluginManager.instance().getPlugin( "NormalizeAction" );
			echo( normalize.getNote() );
			model = normalize.transform( model, param, null, 0, 0 );
			
				// lowpass filter
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );
			MonitoredAction lowpass = PluginManager.instance().getPlugin( "LowpassFilterAction" );
			echo( lowpass.getNote() );
			model = lowpass.transform( model, param, null, 0, 0 );
			
				// reverse again
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );
			echo( reverse.getNote() );
			model = reverse.transform( model, param, null, 0, 0 );

				// downsample to 11025 sps
			param.set( "SampleRateAction.sampleRate", Integer.toString( 11025 ) );	
			param.set( "SampleRateAction.aliasingRequested", "false" );
			param.set( "SampleRateAction.resampleRequested", "true" );
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );	// select all
			echo( sampleRate.getNote() );
			model = sampleRate.transform( model, param, null, 0, 0 );
			echo( "" + model );

				// downsample to 16 bits
			param.set( "SampleSizeAction.sampleSize", Integer.toString( 16 ) );	
			model.setSelection( Selection.ALL_CHANNELS, 0, model.getNumSampleFrames() );
			echo( sampleSize.getNote() );
			model = sampleSize.transform( model, param, null, 0, 0 );
			echo( "" + model );
			
			// Save file
			File dst_file = new File( dst_filename );
			echo( "Saving " + dst_file );
			adapter = SoundFileAdapterManager.instance().getAdapter( dst_file );
			if( adapter == null ) {
				echo( "No file format converter found. Using binary file converter." );
				adapter = new BinaryFileAdapter();
			}
			adapter.setFile( dst_file );
			adapter.createFileFromSound( model );
			
			echo( "Done." );
			System.exit( 0 );
		}
		catch( Exception e ) {
			e.printStackTrace();
			System.out.println( "Usage: java -cp .;Schroeder.jar SchroederBench src_file dst_file [-verbose]" );
			System.exit( -1 );
		}
	}
}
