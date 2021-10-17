package com.example;

/**
 * Hello world!
 *
 */
public class Chapter 
{
    // Atributes
    private String name;
    private String content;

    // Constructor
    public Chapter(String n, String o)
    {
        this.name = n;
        this.content = o;
    }
    
    // Print it
    public void printOut()
    {
        System.out.println("name: " + name + " content: " + content);
    }
}