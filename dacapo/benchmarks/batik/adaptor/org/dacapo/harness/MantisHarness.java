package org.dacapo.harness;

import org.apache.batik.apps.rasterizer.Main;

public class MantisHarness {
    public static void main(String[] args) {
        Main batik = new Main(args);
        batik.execute();
    }
}
