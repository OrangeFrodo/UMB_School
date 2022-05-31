package com.example;

import java.util.*;
import java.util.Arrays;
import java.util.Random;

/**
 * Sorting array, creating functions
 *
 */

public class ArrayClass {
    
    // Atribute
    int[] array;

    // Methods
    void createNew(int size) {
        array = new int[size];
    }
    
    void sortArray() {
        Arrays.sort(array);
    }
    
    void printArry() {
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
        System.out.println("\n");
    }
    
    void inicializeArray() {
        Random r = new Random();
    
        for (int i = 0; i < array.length; i++) {
            array[i] = r.nextInt(50);
        }
    }
}