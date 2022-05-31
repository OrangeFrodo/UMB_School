package com.example;

/**
 * Test Class
 * Úloha 2.
 */
public class TestClass 
{
    public static void main( String[] args )
    {
        new TestClass().newObj();
    }

    public void newObj() {
        // Atributes
        Book testBook = new Book("New Book", "Author of book", 10);

        Chapter newTestChapter = new Chapter("Kapitola 1", "Jadro");
        Chapter newTestChapter2 = new Chapter("Kapitola 2", "Jadro2");

        // Task 1.
        System.out.println("\n 1.");
        testBook.printOut();

        // Task 2.
        System.out.println("\n 2.");
        testBook.addChapter(newTestChapter);
        testBook.printOut();

        // Task 3.
        System.out.println("\n 3.");
        testBook.addChapter(newTestChapter2);
        testBook.printOut();

        // Task 4.
        System.out.println("\n 4.");
        testBook.removeChapter(newTestChapter);
        testBook.printOut();

    }
}

    