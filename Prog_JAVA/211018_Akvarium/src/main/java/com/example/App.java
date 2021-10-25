package com.example;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        new App().work();
    }

    public void work() {
        Akvarium k1 = new Akvarium(30, 5, 5);
        k1.printAkva();
    }
}
