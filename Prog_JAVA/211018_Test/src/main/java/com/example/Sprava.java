package com.example;

/**
 * Hello world!
 *
 */
public class Sprava 
{
    private String nazov;
    private String text;

    private Osoba autor;
    private Osoba[] adresat;

    public Sprava(String nazov, String text, Osoba autor) {
        this.nazov = nazov;
        this.text = text;
        autor = autor;
    }

    public void pridajAdresata(Osoba a) {  
        // Todo
    }
}
