package com.example;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        Osoba p1 = new Osoba("Email", "1234");
        Osoba a1 = new Osoba("Admin", "4321");

        Sprava s1 = new Sprava("Heslo", "heslo je slabe", a1);

        // Print adresat
        s1.pridajAdresata(p1);

    }
}
