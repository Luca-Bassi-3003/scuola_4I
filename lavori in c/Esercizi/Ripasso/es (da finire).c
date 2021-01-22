/* 
    file: es.c
    date: 14 01 2021
    auth: Bassi Luca
    descr: La funzione "int beautifulStrinig(char* s)", controlla se una stringa sia bella o meno, ritornando 1 se bella 0 se non bella.
            Una stringa s è bella se ogni suo carattere compare in numero non superiore a quante volte compare il carattere che lo precede alfabeticamente.
            
            Esempi:
            bbabaa => bella, perché b compare 3 volte e a che precede b 3 volte (non superiore vuol dire <=)
            bcbaa => bella, perché b ed a compaiono 2 volte, c una volta sola
            bcca => brutta, c compare 2 volte e b una soltanto
            bbc => brutta, a compare 0 volte e b 2
            aaz => brutta, a compare 2, tutte fino alla y 0 e la z una volta
*/
#include <stdio.h>
#include <stdlib.h>

int beautifulStrinig(char *s);
int lung(char *s);

int main()
{
    char *str; //str[n]

    printf("Inserisci una parola");
    scanf("%s", str); //&str[0]

    if (beautifulStrinig(str))
    {
        printf("\nBella parola");
    }
    else
        printf("\nBrutta parola");

    int beautifulStrinig(char *s)
    {
        int i, j, cnt = 0;
        //char alpha={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}

        l = lung(s); //ritorno la lunghezza della stringa inserita
        char cp[l + 1];

        copia() //funzione che copia la stringa inserita da me
            for (i = 0; i < l + 1; i++)
        {
            s for (j = i; j < l + ; j++)
            {
                if (*(s + i) == *(s + j))
                {
                    for (int k = 26; k >= 0; k--)
                    {
                    }
                    cnt++;
                }
            }
        }
    }

    int lung(char *s)
    { //trovo la lunghezza della stringa inserita
        int i = 0;
        if (*s != '\0')
        { //s[i]
            i++
        }
        return i;
    }