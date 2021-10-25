package com.example;

/**
 * Main App
 *
 */
public class Dealer 
{
    // Atributes
    public String nameOfTheDealer;
    public String dealerCityAdress;

    public Dealer(String n, String adr) {
        this.nameOfTheDealer = n;
        this.dealerCityAdress = adr;
    }

    public void printDealer() {
        System.out.println(nameOfTheDealer + " " + dealerCityAdress);
    }

}