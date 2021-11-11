package com.example;

import java.util.Random;

public class Akvarium {

    private int sirka;
    private int vyska;

    private Ryba[] ryby;

    // New array (Wrong way, plymor = right)
    // private Zralok[] zraloky;
    // private Pstruh[] pstruhy;

    // Constructor for aqua.
    public Akvarium(int sirka, int vyska, int pocetRyb) {
        this.sirka = sirka;
        this.vyska = vyska;
        // Generuj Ryby
        this.generujRyby(pocetRyb);
    }

    // Generating fishes
    private void generujRyby(int pocet) {
        ryby = new Ryba[pocet];
        Random rnd = new Random();


        for (int i = 0; i < pocet; i++) {
            int x = rnd.nextInt(sirka);
            int y = rnd.nextInt(vyska);

            if (rnd.nextBoolean()) {
                ryby[i] = new Pstruh(x, y);
            } else {
                ryby[i] = new Zralok(x, y);
            }
            
        }
    }

    private Ryba najdiRybu(int x, int y) {
        for (int i = 0; i < ryby.length; i++) {
            Ryba r = ryby[i];
            // Return value of any type of fish
            if (r.nachadzaSa(x, y)) {
                // r je ryba, ktora sa nachadza na pozicii x, y
                return r;
            }
        }
        return null;
    }

    // Methoda printu 
    public void zobraz() {
        for (int y = 0; y < vyska; y++) {
            for (int x = 0; x < sirka; x++) {
                // Still a fish method opisSa() needs to be in fish
                Ryba r = najdiRybu(x, y);
                if (r != null) {
                    System.out.print(r.opisSa());
                } else {
                    System.out.print(".");
                }
            }
            System.out.println();
        }
        System.out.println();
    }

    public void posunRybami() {
        for (int i = 0; i < ryby.length; i++) {
            Ryba r = ryby[i];
            r.posun(sirka-1);
        }
    }

}
