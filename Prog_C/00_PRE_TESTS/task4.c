#include <stdio.h>
#include <stdlib.h>

float min=9999999;

void mesto(int i, float cm[], float cv[], int bm[], int bv[], int m);
void vedenie(int i, float cm[], float cv[], int bm[], int bv[], int m);
int elektrifikovanie(float cm[], float cv[], int bm[], int bv[], int m);

int main(int argc, char const *argv[])
{
    int m;
    scanf("%d", &m);

    float cm[m], cv[m-1];

    int bm[m], bv[m-1];

    for (size_t i = 0; i < m; i++) scanf("%f", &cm[i]);
    for (size_t i = 0; i < m - 1; i++) scanf("%f", &cv[i]);
    
    mesto(0, cm, cv, bm, bv, m);

    
    printf("\n");
    printf("%.2f", min);

    return 0;
}

void mesto(int i, float cm[], float cv[], int bm[], int bv[], int m)
{   // 0 1
    bm[i] = 0;  // nemá elektráreň
    vedenie(i, cm, cv, bm, bv, m);
    bm[i] = 1;  // má elektráreň
    vedenie(i, cm, cv, bm, bv, m);
}

void vedenie(int i, float cm[], float cv[], int bm[], int bv[], int m)
{   
    if (i == m - 1)
    {
        if(elektrifikovanie(cm, cv, bm, bv, m)) {
            printf("\n");
            float cena = 0;
            for(size_t j=0; j<m; j++)printf("%d %d", bm[j], j<m-1 ? bv[j] : 0);

            for (size_t j = 0; j < m; j++) {
                cena += cm[j] * bm[j]; 
            }

            for (size_t j = 0; j < m-1; j++) {
                if(bv[j]) cena += cv[j];
            }
            
            if (min>cena) min = cena;
        }
    } else{
        bv[i] = 0;  // bez vedenia
        mesto(i+1, cm, cv, bm, bv, m);
        bv[i] = 1;  // vedenie <
        mesto(i+1, cm, cv, bm, bv, m);
        bv[i] = 2;  // vedenie >
        mesto(i+1, cm, cv, bm, bv, m); 
    }
  
}

int elektrifikovanie(float cm[], float cv[], int bm[], int bv[], int m)
{
    int el[m], i;

    for(i = 0; i < m; i++){
        // if(bm[i]) el[i] = 1;
        el[i] = bm[i];
    }

    for(i = 1; i < m; i++) {
        if(el[i-1] && bv[i-1] == 2) el[i] = 1;
    }

    for(i = m-2; i >= 0; i--) {
        if(el[i+1] && bv[i] == 1) el[i] = 1;
    }
    
    int sum=0;
    for (i = 0; i < m; i++) {
        sum += el[i];
    }
    
    return(sum == m);
}