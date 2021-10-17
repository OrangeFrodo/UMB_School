package com.example;

/**
 * Hello world!
 *
 */
public class App {

  public static void main(String[] args) {
    new App().work();
  }

  public void work() {
    // Atribute for people print
    int numOfPeopleFromStatic;

    // New objects creation
    Person k1 = new Person("Andrej");
    Person k2 = new Person("Adam");

    // 1. Test
    numOfPeopleFromStatic = k2.numOfPeople();
    System.out.println(numOfPeopleFromStatic);
    k2.introduceSelf();

    Person k3 = new Person("Peter");

    // 2. Test
    numOfPeopleFromStatic = k3.numOfPeople();
    System.out.println(numOfPeopleFromStatic);
  }
}
