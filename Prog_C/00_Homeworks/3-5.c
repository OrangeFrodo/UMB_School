#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int h, m;
    float s;
    
    printf("Kolko je hodin? Napis: ");
    scanf("%d", &h);
    if (h >= 24) {
         printf("Nieje mozne mat %2.d hodin skus este raz: ", h);
         scanf("%d", &h);
    }
    printf("Kolko je minut? Napis: ");  
    scanf("%d", &m);
    if (m >= 60) {
         printf("Nieje mozne mat %2.d minut skus este raz: ", m);
         scanf("%d", &m);
    }
    printf("Kolko je sekund? Napis: ");
    scanf("%f", &s);
    if (s >= 60) {
         printf("Nieje mozne mat %2.f sekund skus este raz: ", s);
         scanf("%f", &s);
    }

    printf("Prebehlo %2.f sekund od 0:00", h*3600+m*60+s);

    return 0;
}