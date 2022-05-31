package com.example;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        App.work();
    }

    public static void work() {
        Zlomok f3 = new Zlomok();
        // Zlomok 1
        int zlom1c = 1;
        int zlom1m = 2;

        // Zlomok 2
        int zlom2c = 2;
        int zlom2m = 3;

        // Výsledok
        int zlom3c = 1;
        int zlom3m = 1;

        zlom3m = f3.menovatel_v3Find(zlom1c, zlom1m, zlom2c, zlom2m);
        System.out.println("\\3M" + zlom3m);

        zlom3c = f3.citatel_v3Find(zlom1c, zlom1m, zlom2c, zlom2m, zlom3m);
        System.out.println("\\3C" + zlom3c);

        f3.addFractions(zlom1c, zlom1m, zlom2c, zlom2m);

        f3.simpleForm(zlom3c, zlom3m);
    }
}
