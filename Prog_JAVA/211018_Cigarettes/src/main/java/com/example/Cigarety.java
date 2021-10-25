package com.example;

/**
 * Main App
 *
 */
public class Cigarety {

  // Atributes
  public String nameOfPack; // - = private
  private int numOfCigaretesInPack;

  public Dealer[] dodavatel;

  // Konštruktor
  public Cigarety(String n, int num, int numOfDod) {
    this.nameOfPack = n;
    this.numOfCigaretesInPack = num;

    // Class in class
    dodavatel = new Dealer[numOfDod];
  }

  // Methods
  // If private, than argument wont come
  public void printOut(String name) {
    System.out.println("Nazov balika " + name);
  }

  public int returnNumOfCigaretesForDodavatel() {
    return this.numOfCigaretesInPack;
  }

  public void addDodavatelFor(Dealer possibleDealer) {
    for (int i = 0; i < dodavatel.length; i++) {
      // System.out.println(dodavatel.length);
      if (dodavatel[i] == null) {
        this.dodavatel[i] = possibleDealer;
        System.out.println("Add dodavatel");
        dodavatel[i].printDealer();
        return;
      }
    }
    System.out.println("Full dodavatelia");
  }
}
