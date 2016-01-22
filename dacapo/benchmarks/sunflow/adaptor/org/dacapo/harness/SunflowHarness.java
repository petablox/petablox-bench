/*
 * Copyright (c) 2009 The Australian National University.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Apache License v2.0.
 * You may obtain the license at
 * 
 *    http://www.opensource.org/licenses/apache2.0.php
 */
package org.dacapo.harness;

import java.io.File;
import org.sunflow.Benchmark;

import org.dacapo.parser.Config;

/**
 * @date $Date: 2009-12-24 11:19:36 +1100 (Thu, 24 Dec 2009) $
 * @id $Id: Sunflow.java 738 2009-12-24 00:19:36Z steveb-oss $
 */
public class SunflowHarness extends org.dacapo.harness.Benchmark {

  private Benchmark sunflow;

  public SunflowHarness(Config config, File scratch) throws Exception {
    super(config, scratch, false);
  }

  /** Do one-time prep such as unziping data. In our case, do nothing. */
  protected void prepare() {
  }

  /**
   * Code to execute prior to each iteration OUTSIDE the timing loop. In this
   * case we create a new instance of a Sunflow benchmark, which sets up basic
   * data structures.
   * 
   * @param size The "size" of the iteration (small, default, large)
   */
  public void preIteration(String size) throws Exception {
    String[] args = config.preprocessArgs(size, scratch);
      sunflow = new Benchmark(Integer.parseInt(args[0]), false, false, false, config.getThreadCount(size));
      sunflow.kernelBegin();
  }

  /**
   * Perform a single iteration of the benchmark.
   * 
   * @param size The "size" of the iteration (small, default, large)
   */
  public void iterate(String size) throws Exception {
    sunflow.kernelMain();
  }

  /**
   * Validate the output of the benchmark, OUTSIDE the timing loop.
   * 
   * @param size The "size" of the iteration (small, default, large)
   */
  public boolean validate(String size) {
    if (!getValidate())
      return true;
    try {
        sunflow.kernelEnd();
    } catch (RuntimeException e) {
      System.err.println(e.getMessage());
      return false;
    } catch (Exception e) {
      e.printStackTrace();
      return false;
    }
    return super.validate(size);
  }
}
