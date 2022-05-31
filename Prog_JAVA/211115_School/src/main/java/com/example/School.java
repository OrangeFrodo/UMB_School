package com.example;

import java.util.Random;

/**
 * Person
 *
 */
public class School {

  int numOfPeople;
  private Person[] person;

  public School(int numOfP) {
    this.numOfPeople = numOfP;
    this.generujLudi(numOfP);
  }

  // Generating fishes
    private void generujLudi(int pocet) {
        person = new Person[pocet];
        Random rnd = new Random();
        

        for (int i = 0; i < 2; i++) {
            // Neviem dať random string
            // Mal som záujem precvičovať podľa akvarium.
            person[i] = new Teacher("Adam", "Tomko", rnd.nextInt(50));
        }
        for (int i = 2; i < 6; i++) {
            float random = rnd.nextFloat() + 2;
            person[i] = new Student("Tomko", "Petrik", random);
        }
    }
    
    public void zobraz() {
        for(int i = 0; i<5; i++){
            Person r = person[i];
            r.printInf();
        }
    }
}

