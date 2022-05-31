package com.example;

/**
 * Ryba
 *
 */
public class Ryba 
{
    int x;
    int y;
    boolean smer = false;

    public Ryba(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    boolean nachadzaSa(int x, int y) {
        return this.x == x && this.y == y; 
    }

    void pohybR(){
        this.x++;
    }

    void pohybL(){
        this.x--;
    }
}