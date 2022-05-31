package com.example;

/**
 * Main App
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        new App().work();
    }

    public void work() {
        // Vytvorenie obj k1 = Nazov "Malbor", "20", "3";
        Cigarety k1 = new Cigarety("Malboro", 20, 3);

        // New Dealer
        Dealer d1 = new Dealer("BreakBar", "BB");

        // Return int function
        int workingNumberOfCigares = 0;

        k1.printOut(k1.nameOfPack);
        k1.addDodavatelFor(d1);

        // INT FUNCTION
        workingNumberOfCigares = k1.returnNumOfCigaretesForDodavatel();
        System.out.println(workingNumberOfCigares);

    }

/*     public void sendSometing(Cigarety newClass){
        newClass.k1;
    } */
}
