package com.example;
import java.util.*;  


/**
 * Linked list (Arry je len zle meno pre classu)
 *
 */
public class Array 
{
    // Atom
    private Atom start;

    // Rad
    LinkedList<Integer>atomList = new LinkedList<Integer>();

    public Array(Atom s) {
        start = s;

        this.atomList.addFirst(start.value);
    }

    public void add(Atom at){
        this.atomList.add(at.value);
    }

    public void printOut(){
        for(Integer val: atomList)
            System.out.println(val);
    }
}
