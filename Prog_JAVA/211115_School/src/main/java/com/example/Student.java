package com.example;

/**
 * Student
 *
 */
public class Student extends Person 
{
    float studyMean;

    public Student(String f, String l, float h) {
        super(f, l);
        studyMean = h;
    }

    public void printInf(){
        System.out.printf("volám sa " + this.fName + " a mám študijný priemer " + this.studyMean + "\n");
    }
}