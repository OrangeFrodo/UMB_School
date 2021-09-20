package com.example;
import java.util.Random;

/**
 * Hello world!
 *
 */
public class App 
{
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

        // Sorting 
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

        
        // Print array
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i] + " "); 
        }

    }
}