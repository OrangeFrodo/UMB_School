package com.example;

import java.util.*;
import java.util.Arrays;
import java.util.Random;

/**
 * Hello world!
 *
 */
public class ArrayClass 
{
    // Atribute
    int array[];

    void createArray (int size) {
        array = new int[size];
    }

    void arraySort () {
        Arrays.sort(array);
    }

    void printArray () {
        for(int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
        System.out.println("\n");
    }

    void inicializeArray() {
        Random r = new Random();

        for(int i = 0; i < array.length; i++) {
            array[i] = r.nextInt(50);
        }
    }
}
