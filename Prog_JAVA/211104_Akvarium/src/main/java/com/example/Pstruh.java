package com.example;

// Extends class 
public class Pstruh extends Ryba 
{
    // Must have konstruktor
    public Pstruh(int x, int y) {
        super(x, y);
    }

    float hmotnost;

    char opisSa() {
        return 'P';
    }
}