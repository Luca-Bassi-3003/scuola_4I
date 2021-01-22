#include <stdlib.h>
#include <stdio.h>

int main()
{
    char z[] = {"ciao\0"};
    char p[3];
    int i;
    for (i = 0; i <= 3; i++)
    {
        p[i] = z[i];
    }

    for (i = 0; i <= 3; i++)
    {
        printf("%c", z[i]);
    }
}
