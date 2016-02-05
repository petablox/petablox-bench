// if using JDK 1.2 leave this code out and use
// java.util.Comparator instead.

package cmp.QuickSort;

// Comparator.java
// delegate object to hand to QuickSort for callback compare
public interface Comparator {

   // compare effectively returns a-b;
   // e.g. +1 (or any +ve number) if a > b
   //       0                     if a == b
   //      -1 (or any -ve number) if a < b
   abstract public int compare(Object a, Object b);
   // e.g. return ((String)a).compareTo((String)b;

   abstract public boolean equals(Object a, Object b);
   // e.g. return ((String)a).equals((String)b;

} // end class Comparator
