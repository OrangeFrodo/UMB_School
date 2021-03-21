#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j, n, pre;
 
   printf("Velkost radu: ");
   scanf("%d",&n);

   int p[n];
 
   for (i = 0; i < n; i++) 
      scanf("%d", &p[i]);
 
   j = i - 1; 
   i = 0; // 1      
 
   while (i < j) {   
      pre = p[i]; // pre = 5
      p[i] = p[j]; // p[i] = 8 
      p[j] = pre;
      i++;             
      j--;         
   }
 
   printf("Vysledok je: ");

   for (i = 0; i < n; i++) 
      printf("%d", p[i]);
 
   return 0;
}
