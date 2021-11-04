package com.example;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        Aritmetika a1 = new Aritmetika();
        int answer;

        a1.nastav(5, 3);

        answer = a1.scitaj();
        System.out.println(answer + "\n");

        answer = a1.odcitaj();
        System.out.println(answer + "\n");
    }
}
