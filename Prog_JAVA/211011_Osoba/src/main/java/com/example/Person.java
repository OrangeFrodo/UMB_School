package com.example;

import java.util.Date;

/**
 * Osoba class
 *
 */
public class Person 
{
    // Atri.

    private String name;
    private Date birthDate;

    private static int num;

    public Person(String name) {
        this.name = name;
        // Static ++
        num++;
    }

    public void introduceSelf() {
        System.out.println(this.name + " " + num);
    }

    public static int numOfPeople() {
        return num;
    }
    
}
