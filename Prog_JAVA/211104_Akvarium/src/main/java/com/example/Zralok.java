package com.example;

// Extends class 
public class Zralok extends Ryba 
{
    // Must have konstruktor
    public Zralok(int x, int y) {
        super(x, y);
    }
    
    int krvilacnost;

    char opisSa() {
        return 'Z';
    }
}