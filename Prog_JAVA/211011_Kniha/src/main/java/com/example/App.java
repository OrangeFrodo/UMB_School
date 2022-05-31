package com.example;

/**
 * Main APP
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        new App().work();
    }

    public void work() {
        // New book
        Book k1 = new Book("Pihkal", "AnnAlexander", 5);

        // New chapter, add to the book
        Chapter k11 = new Chapter("Nazov", "Daco");

        k1.addChapter(k11);
        k1.printOut();
    }

    
}
