package com.example;

import java.util.*;
import java.util.Arrays;
import java.util.Random;

/**
 * Sorting array, creating functions
 *
 */
public class SortClass {

  public static void main(String[] args) {
    new SortClass().work();
  }

  public void work() {
    // From array
    ArrayClass a1 = new ArrayClass();

    // Create array
    a1.createNew(10);

    // Fill array
    a1.inicializeArray();

    // Print array
    a1.printArry();

    // Sort array
    a1.sortArray();

    // Print array
    a1.printArry();
  }
}
