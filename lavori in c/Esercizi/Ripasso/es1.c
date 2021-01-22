/* 
Scrivere un programma (uno solo) che chieda
di introdurre 3 numeri A, B e C dalla tastiera e
successivamente visualizzi il risultato dei tre
seguenti calcoli:
1) A–B 
2) A–B+C 
3) A–B–C
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A, B, C;
    int x = 0;

    do
    {
        printf("inserisci un numero: ");
        if (x == 0)
        {
            scanf("%d", &A);
        }
        else if (x == 1)
        {
            scanf("%d", &B);
        }
        else
            scanf("%d", &C);

        x++;
    } while (x <= 3);

    if (A > B && B > C)
    {
        printf("la differenza di A e B e': %d", A - B);
        printf("la differenza di A e B più C e': %d", A - B + C);
        printf("la differenza di A, B, e C e': %d", A - B - C);
    }
    else
        ("NUMERI TROPPO GRANDI");
}
