package com.example;
import java.util.*;  

/**
 * Sinvle atom
 *
 */
public class Atom 
{
    private Atom next;
    public int value; // Viem to spraviť iba keď je public value

    public Atom(Atom n, int v){
        this.next = n;
        this.value = v;

        // Start of atoms
        if (n == null) {
            this.next = null;
            this.value = 0;
        }
    }
}
