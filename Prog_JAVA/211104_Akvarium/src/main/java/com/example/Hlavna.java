package com.example;


public class Hlavna {

    public static void main(String[] args) throws InterruptedException {
        Akvarium a = new Akvarium(10, 5, 5);
        // a.generujRyby(3);
        a.zobraz();
        while (true) {
            a.posunRybami();
            a.zobraz();
            Thread.sleep(1000);
        }
    }

}
