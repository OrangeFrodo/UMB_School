package com.example;
import java.util.Random;

/**
 * UMB 1. Seasion
 * 
 * Creating random array with sorting through sorting algo.
 * Functions created: HeapSort
 */


public class App 
{
    /*
            // HEAP-SORT
        1.// https://stackabuse.com/sorting-algorithms-in-java/
    */
    static void heapify(int[] array, int length, int i) {
        int leftChild = 2*i+1;
        int rightChild = 2*i+2;
        int largest = i;
    
        // if the left child is larger than parent
        if (leftChild < length && array[leftChild] > array[largest]) {
            largest = leftChild;
        }
    
        // if the right child is larger than parent
        if (rightChild < length && array[rightChild] > array[largest]) {
            largest = rightChild;
        }
    
        // if a swap needs to occur
        if (largest != i) {
            int temp = array[i];
            array[i] = array[largest];
            array[largest] = temp;
            heapify(array, length, largest);
        }
    }
    
    public static void heapSort(int[] array) {
        if (array.length == 0) return;
    
        // Building the heap
        int length = array.length;
        // we're going from the first non-leaf to the root
        for (int i = length / 2-1; i >= 0; i--)
            heapify(array, length, i);
    
        for (int i = length-1; i >= 0; i--) {
            int temp = array[0];
            array[0] = array[i];
            array[i] = temp;
    
            heapify(array, i, 0);
        }
    }

    /*
        \\ HEAP-SORT
            end.\\ https://stackabuse.com/sorting-algorithms-in-java/
    */

    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        

        // New array
        Random rand = new Random();
        int[] array;
        int upperbound = 25;

        // New array allocate
        array = new int[5];

        // New fill
        for (int i = 0; i < array.length; i++) {
            array[i] = rand.nextInt(upperbound);
        }

        // Sorting UMB_In_School
        /*         
        boolean sorted = false;
        int temp;
        while(!sorted) {
            sorted = true;
            for (int i = 0; i < array.length - 1; i++) {
                if (array[i] > array[i+1]) {
                    temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                    sorted = false;
                }
            }
        } 
        */

        // Home created sort
        heapSort(array);
        
        // Print array
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i] + " "); 
        }

    }
}