package com.example;

/**
 * Person
 *
 */
public abstract class Person {

  String fName;
  String lName;
  int randomNum;

  private Person[] person;

  public Person(String f, String l) {
    this.fName = f;
    this.lName = l;
    this.randomNum = randomNum;
  }

  public abstract void printInf();
}
