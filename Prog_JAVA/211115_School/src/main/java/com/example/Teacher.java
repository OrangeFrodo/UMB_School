package com.example;

/**
 * Teacher
 *
 */
public class Teacher extends Person 
{
    int numOfHours;

    public Teacher(String f, String l, int h) {
        super(f, l);
        this.numOfHours = h;
    }

    public void printInf(){
        System.out.printf("volám sa " + this.fName + " a mám študijný priemer " + this.numOfHours + "\n");
    }
}