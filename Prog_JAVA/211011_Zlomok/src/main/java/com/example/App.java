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

    public void work() 
    {
        Fractions k1 = new Fractions();
        Fractions k2 = new Fractions();
        Fractions k3 = new Fractions();

        k1.citatel = 1;
        k1.menovatel = 2;

        k2.citatel = 3;
        k2.menovatel = 2;

        k3.addFractions(k1.citatel, k1.menovatel, k2.citatel, k2.menovatel);
    }
}
