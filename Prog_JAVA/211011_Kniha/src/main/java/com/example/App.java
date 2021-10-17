package com.example;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        new App().work();
    }

    public void work() {
        Book k1 = new Book("Pihkal", "AnnAlexander", 5);
        Chapter k11 = new Chapter("Nazov", "Daco");

        k1.addChapter(k11);
        k1.printOut();
    }
    
}
