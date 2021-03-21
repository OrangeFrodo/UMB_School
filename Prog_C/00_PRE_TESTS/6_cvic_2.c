#include <stdio.h>
#include <stdlib.h>

int main()
{  
    FILE *fr, *fw; // |_||_||_||_|  |_|
    int c;         // |h||e||l||o|  |\0|

    fr = fopen("ORIG.TXT", "r");
    fw = fopen("KOPIE.TXT", "w");

    while ((c = getc(fr)) != EOF) {
        putc(c, fw);
    }

    fclose(fr);
    fclose(fw);
}