package com.example;

/**
 * Book class, vytvorenie class-i kniha s atributmy a metodami.
 * Úloha 1.
 */
public class Book 
{
    // Atributes
    private String name;
    private String author;
    private static int numOfChapters = 0;

    // Right
    private Chapter[] chapters;

    // Wrong 
    //private Chapter [] Kapitola = new Chapter[4];

    public Book(String n, String a, int maxChapters)
    {
        this.name = n;
        this.author = a;
        // Atribut in inicializator
        // New class
        chapters = new Chapter[maxChapters];
    }

    // Add Chapter method
    public void addChapter(Chapter k)
    {
        // look for free space in chapters
        for (int i = 0; i< chapters.length; i++) {
            if (chapters[i] == null){
                chapters[i] = k;
                this.numOfChapters++;
                return;
            }
        }
        System.out.println("Book is full");
    }

    public void removeChapter(Chapter k)
    {
        // look for 1. chapter in book
        for (int i = 0; i< chapters.length; i++) {
            if (chapters[i] == k){
                chapters[i] = null;
                this.numOfChapters--;
                return;
            }
        }
        System.out.println("Book is empty");
    }

    // Printout
    public void printOut()
    {
        // System.out.println("name: "+ name + " author: " + author +"\n");
        System.out.println("Num Of chapters "+ numOfChapters);
        for (int i = 0; i < chapters.length; i++)
        {
            
            if (chapters[i] == null) {
                continue;
            }
            // Commented becouse of comment on chapters
            // chapters[i].printOut();
        }
    }

    
}
