package com.example;

/**
 * Hello world!
 *
 */
public class Book 
{
    private String name;
    private String author;

    // Right
    private Chapter[] chapters;

    // Wront 
    //private Chapter [] Kapitola = new Chapter[4];

    public Book(String n, String a, int maxChapters)
    {
        this.name = n;
        this.author = a;
        chapters = new Chapter[maxChapters];
    }

    // Add Chapter method
    public void addChapter(Chapter k)
    {
        // look for free space in chapters
        for (int i = 0; i< chapters.length; i++) {
            if (chapters[i] == null){
                chapters[i] = k;
                return;
            }
        }
        System.out.println("Book is full");
    }

    // Printout
    public void printOut()
    {
        System.out.println("name: "+ name + " author: " + author);
        for (int i = 0; i < chapters.length; i++)
        {
            
            if (chapters[i] == null) {
                continue;
            }
            chapters[i].printOut();
        }
    }

    
}
