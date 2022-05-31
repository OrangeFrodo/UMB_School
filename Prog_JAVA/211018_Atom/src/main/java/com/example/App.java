package com.example;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        Atom a1 = new Atom(null, 1);
        Atom a2 = new Atom(a1, 5);
        Atom a3 = new Atom(a2, 9);

        Array AR1 = new Array(a1);
        AR1.add(a2);
        AR1.add(a3);

        AR1.printOut();
    }
}
