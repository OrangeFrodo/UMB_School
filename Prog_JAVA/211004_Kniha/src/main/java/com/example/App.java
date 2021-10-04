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

        SetBooks f1 = new SetBooks();
        f1.setBooksFunction(0, "Autor", "Kniha", 8); 
        f1.setBooksFunction(1, "Autor", "Kniha", 50);
        f1.setBooksFunction(3, "Autor", "Kniha", 98);
    }

    public void work() {
        Book k1 = new Book();
        Book k2 = new Book();

        // Book num 1
        k1.name = "Lotr";
        k1.author = "Tolkien";

        k1.changePage(4);
        k1.printPage();

        // Book num 2
        k2.name = "Harry Potter";
        k2.author = "Rolings";

        k2.changePage(6);
        k2.printPage();
    }
}
