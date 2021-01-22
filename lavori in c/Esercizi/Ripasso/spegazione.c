#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "ciao";
    int i = 0;

    while (*s + i != '\0')
    {
        printf("%c", *s + i);
        i++;
    }

    printf("\n");

    while (*(s + i) != '\0')
    {
        printf("%c", *(s + i));
        i++;
    }
}
