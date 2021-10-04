package com.example;

/**
 * Hello world!
 *
 */
public class SortArray {

  public static void main(String[] args) {
    new SortArray().work();
  }

  public void work() {
    ArrayClass a1 = new ArrayClass();

    a1.createArray(5);

    a1.inicializeArray();

    a1.printArray();

    a1.arraySort();

    a1.printArray();
  }
}
