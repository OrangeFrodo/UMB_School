package com.example;


public abstract class Ryba {

    int x;
    int y;
    SmerPlavania smer = SmerPlavania.DOPRAVA;

    public Ryba(int x, int y) {
        this.x = x;
        this.y = y;
    }

    abstract char opisSa();


    boolean nachadzaSa(int x, int y) {
        return this.x == x && this.y == y;
//        if (this.x == x && this.y == y) {
//            return true;
//        } else{
//            return false;
//        }
    }

    void posun(int maxX) {
        if (smer == SmerPlavania.DOPRAVA) {
            x++;
            if (x == maxX) {
                smer = SmerPlavania.DOLAVA;
            }
            return;
        }
        if (smer == SmerPlavania.DOLAVA) {
            x--;
            if (x == 0) {
                smer = SmerPlavania.DOPRAVA;
            }
            return;
        }
    }

}
