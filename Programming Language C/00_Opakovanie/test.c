//Navrhnite algoritmus a vytvorte program, ktorý načíta celé kladné číslo n, 
//ktoré predstavuje počet prvkov poľa. Následne načíta n reálnych prvkov poľa. 
//Program vymení dvojice prvkov prvý s posledným, druhý s predposledným atď, 
//až kým nebudú všetky prvky vymenené (budú v opačnom poradí). Výsledok vypíše na obrazovku.


#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;

    printf("Zadaj cele kladne cislo: ");
    scanf("%d", &n);

    int pole[n], pom;

    for (int i=0; i<n; i++) {
        printf("Zadaj hodnotu %d prvku: ", i+1);
        scanf("%d", &pole[i]);
    }  

    pom = 0;

    for (int i=0; i<=n; i++) {
        pom = pole[i];
        pole[i] = pole[n-i];
        pole[n-i] = pom;
    }

    for(int i=0; i<=n; i++) {
        printf("%d", pole[i]);
    }

    return 0;
}