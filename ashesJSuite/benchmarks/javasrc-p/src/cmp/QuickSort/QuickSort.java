// QuickSort.java

package cmp.QuickSort;
// if using JDK 1.2
// import java.util.Comparator;


/*
Source code for Hoare's QuickSort

Copyright 1996-1998

  Roedy Green
  Canadian Mind Products
  5317 Barker Avenue
  Burnaby, BC Canada V5H 2N6
  tel: (604) 435-3016
  mailto:roedy@mindprod.com
  http://mindprod.com

May be freely distributed for any purpose but military.

Version 1.0
        1.1 1998 November 10 - add name and address.
        1.2 1998 December 28 - JDK 1.2 style Comparator

Eric van Bezooijen <eric@logrus.berkeley.edu> was the
original author of this version of QuickSort.  I modified
the version he posted to comp.lang.java to use a callback
delegate object. I also made a few optimisations.

I have also posted source for HeapSort and RadixSort both
of which run faster than QuickSort.

*/

// author:Eric van Bezooijen <eric@logrus.berkeley.edu>
// modifed by Roedy Green <roedy@bix.com>
// to a use a Comparator callback delegate
/**
 * QuickSort for objects
 */
public class QuickSort {

   private static final String EmbeddedCopyright =
   "Copyright 1996-1998 Roedy Green, Canadian Mind Products, http://mindprod.com";

   private static final boolean debugging = false;

   // callback object we are passed that has
   // a Comparator(Object a, Object b) method.
   private Comparator delegate;

   // pointer to the array of user's objects we are sorting
   private Object [] userArray;

   // create a QuickSort object and sort the user's array
   public static void sort (Object [] userArray, Comparator delegate ) {
      QuickSort h = new QuickSort();
      h.delegate = delegate;
      h.userArray = userArray;
      if ( h.isAlreadySorted() ) return;
      h.quicksort(0, userArray.length-1);
      if ( h.isAlreadySorted() ) return;
      if ( debugging ) {
         // debug ensure sort is working
         if ( ! h.isAlreadySorted() ) System.out.println("Sort failed");
      }
      return;
   } // end sort

   // recursive quicksort that breaks array up into sub
   // arrays and sorts each of them.
   private void quicksort(int p, int r) {
      if ( p < r ) {
         int q = partition(p,r);
         if ( q == r ) {
            q--;
         }
         quicksort(p,q);
         quicksort(q+1,r);
      } // end if
   } // end quicksort

   // Partition by splitting this chunk to sort in two and
   // get all big elements on one side of the pivot and all
   // the small elements on the other.
   private int partition (int lo, int hi) {
      Object pivot = userArray[lo];
      while ( true ) {
         while ( delegate.compare(userArray[hi],pivot) >= 0 &&
                 lo < hi ) {
            hi--;
         }
         while ( delegate.compare(userArray[lo],pivot) < 0 &&
                 lo < hi ) {
            lo++;
         }
         if ( lo < hi ) {
            // exchange objects on either side of the pivot
            Object T = userArray[lo];
            userArray[lo] = userArray[hi];
            userArray[hi] = T;
         } else return hi;
      } // end while
   } // end partition

   // check if user's array is already sorted
   private boolean isAlreadySorted() {
      for ( int i=1; i<userArray.length; i++ ) {
         if ( delegate.compare(userArray[i],userArray[i-1]) < 0 )
            return false;
      }
      return true;
   } // end isAlreadySorted

} // end class QuickSort

