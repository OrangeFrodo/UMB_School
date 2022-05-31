package com.example;

/**
 * Add to fractions
 *
 */
public class Zlomok 
{
    // GCD
    int gcd (int a, int b) {
        if (a == 0)
            return b;
        return gcd(b%a, a);
    }

    // Add fractions
    void addFractions(  int citatel_v1, int menovatel_v1,
                        int citatel_v2, int menovatel_v2
    )
    {
        int zlomok_M3 = menovatel_v3Find(citatel_v1, menovatel_v1, citatel_v2, menovatel_v2);
        zlomok_M3 = (menovatel_v1*menovatel_v2) / zlomok_M3;

        int zlomok_C3 = citatel_v3Find(citatel_v1, menovatel_v1, citatel_v2, menovatel_v2, zlomok_M3);
        simpleForm(zlomok_C3, zlomok_M3);
    }


    // Menovate
    int menovatel_v3Find(   int citatel_v1, int menovatel_v1,
                            int citatel_v2, int menovatel_v2)
    {
        int menovatel_v3 = gcd(menovatel_v1, menovatel_v2);
        menovatel_v3 = (menovatel_v1/menovatel_v2) / menovatel_v3;
        return menovatel_v3;
    }

    // Citatel
    int citatel_v3Find( int citatel_v1, int menovatel_v1,
                    int citatel_v2, int menovatel_v2,
                    int menovatel_v3)
    {
        int citatel_v3 = (citatel_v1) * (menovatel_v3/menovatel_v1) + (citatel_v2) * (menovatel_v3/menovatel_v2);
        return citatel_v3;
    }


    // Simple form 
    void simpleForm (int citatel_v3, int menovatel_v3) 
    {
        int common_factor = gcd(citatel_v3, menovatel_v3);
        System.out.println("\\ "+common_factor);

        citatel_v3 = citatel_v3/ common_factor;
        menovatel_v3 = menovatel_v3/ common_factor;

        System.out.println(citatel_v3+"/"+menovatel_v3);
    }


}