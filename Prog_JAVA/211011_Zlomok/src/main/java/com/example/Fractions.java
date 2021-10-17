package com.example;

/**
 * Fractions
 * Source: https://www.geeksforgeeks.org/program-to-add-two-fractions/
 */
public class Fractions 
{
    // Atributes
    int citatel;
    int menovatel;

    public void addFractions(int a, int b, int c, int d) {
        int menAnsw = gcd(b, d);
        menAnsw = (b * d) / menAnsw;

        int citAnsw = (a)*(menAnsw/a) + (b)*(menAnsw/b);
        simpleForm(menAnsw, citAnsw);
    }

    static int gcd(int a, int b) 
    {
        if (a == 0)
            return b;
        return gcd(b%a, a);
    }

    static void simpleForm(int f, int e)
    {
    // Finding gcd of both terms
        int common_factor = gcd(e,f);
 
    // Converting both terms into simpler
    // terms by dividing them by common factor
        f = f/common_factor;
        e = e/common_factor;
        System.out.println(e+"/"+f);
    }
}
