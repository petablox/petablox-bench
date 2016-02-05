// TestQuickSort.java

// demonstrate how to use QuickSort class.

/*
Copyright 1996-1998

  Roedy Green
  Canadian Mind Products
  5317 Barker Avenue
  Burnaby, BC Canada V5H 2N6
  tel: (604) 435-3016
  mailto:roedy@mindprod.com
  http://mindprod.com

May be freely distributed for any purpose but military.

*/

import java.util.Random;
import cmp.QuickSort.QuickSort;
// If you are using JDK 1.2 include the following import:
// import java.util.Comparator;
// and leave out cmp.QuickSort.Comparator
import cmp.QuickSort.Comparator;

public class TestQuickSort {

   // Test QuickSort by sorting N random Strings
   public static void main (String[] args) {
      final int N = 10000;
      String [] anArray = new String [N];
      Random wheel = new Random(149);
      for ( int i=0; i<anArray.length; i++ ) {
         // keys of form A9999
         anArray[i] = "A" + (wheel.nextInt() & Integer.MAX_VALUE % 10000);
      }

      System.out.println("Start QuickSort items=" + N);
      long start = System.currentTimeMillis();

      QuickSort.sort(anArray, new StringComparator());

      long stop = System.currentTimeMillis();
      System.out.println("Elapsed:"
                         + (stop-start));

      // waste a little time to let user admire the results
      try {
         Thread.sleep(3000);
      } catch ( InterruptedException e ) {

      }
   } // end main
} // end class TestQuickSort

// Callback delegate to describe our particular collating sequence
// to QuickSort
class StringComparator implements Comparator {

   // Comparator two Strings. Callback for sort.
   // effectively returns a-b;
   // e.g. +1 (or any +ve number) if a > b
   //       0                     if a == b
   //      -1 (or any -ve number) if a < b
   public final int compare ( Object a, Object b) {
      return ((String)a).compareTo((String)b);
   } // end compare

   public final boolean equals ( Object a, Object b) {
      return ((String)a).equals((String)b);
   }// end equals
} // end class StringComparator
