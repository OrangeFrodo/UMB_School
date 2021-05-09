#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i,*h,*ps,*s, d;

    scanf("%d%d",&n, &d);

    ps = (int*) malloc(sizeof(int) * (n+1));
    h = (int*) malloc(sizeof(int) * (n+1));
    s = (int*) malloc(sizeof(int) * (n+1));

    for(i=1;i<=n;i++){
        scanf("%d",&h[i]);
    }

    ps[0]=1;
    ps[1]=ps[0];
    s[0]=0;

    for(i=1;i<=n;i++){
        s[i]=s[i-1]+h[i];
        int j=i-1; //vyska=h[i];
        ps[i]=0;
        while((j>=0) && (s[i]-s[j])<=d){
            ps[i] += ps[j];
            //vyska += h[j];
            j--;
        }
    }
    
    printf("%d \n", ps[n]);

    free(h);
    free(ps);
    free(s);
}