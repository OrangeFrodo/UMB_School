package com.example;

import java.util.Random;

/**
 * Hello world!
 *
 */
public class Akvarium {

  int row;
  int collumn;
  Ryba[] ryby;

  public Akvarium(int r, int c, int pocetRyb) {
    this.row = r;
    this.collumn = c;
    this.ryby = new Ryba[pocetRyb];

    // Function in konštruktor
    fillRyby();
  }

  public void printAkva() {
    // Go in matrix
    for (int i = 0; i < collumn; i++) {
      for (int j = 0; j < row; j++) {
        // Bool type for fish
        boolean fishFound = false;

        for (int k = 0; k < ryby.length; k++) {
          if (ryby[k].nachadzaSa(j, i)) {
            fishFound = true;
            // i++; Version 2.
          }
        }
        // Version 2.
        // System.out.print(".");
        //
        if (!fishFound) System.out.print("."); else System.out.print("R");
      }
      System.out.println();
    }
  }

  // Method for add
  public void move() {
    System.out.println();
    for (int i = 0; i < ryby.length; i++) {
      if (ryby[i].smer == false) {
        if (ryby[i].x == this.row -1) {
          ryby[i].smer = true;
        }
        ryby[i].pohybR();
      }
      if (ryby[i].smer == true) {
        if (ryby[i].x == 0) {
          ryby[i].smer = false;
        }
        ryby[i].pohybL();
      }
    }
  }

  void fillRyby() {
    Random rnd = new Random();
    for (int i = 0; i < ryby.length; i++) {
      ryby[i] = new Ryba(rnd.nextInt(row), rnd.nextInt(collumn));
    }
  }
}
