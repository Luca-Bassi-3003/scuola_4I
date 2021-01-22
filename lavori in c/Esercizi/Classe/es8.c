/* 
Es. 6: Acquisire da tastiera una frase (contenente al più 50
caratteri minuscoli) ed un numero interno positivo (negativo)
n. Cifrare la frase sostituendo a ciascun carattere un nuovo
carattere posto n posizioni avanti (indietro) nell'alfabeto.
Inserisci una frase: zorro era matto
Inserisci un numero intero: 3
La frase cifrata e: cruur hud pdwwr 
 */

#include<stdlib.h>
#include<stdio.h>

void code(char* a, int);

int main(){
    char p[50];
    int n;

    printf("Inserisci la parola: ");
    gets(p);
    fflush(stdin);

    printf("Inserisci un numero positivo: ");
    scanf("%d", &n);
    fflush(stdin);

    code(p, n);
}

void code(char* a, int n){
    for(int i=0; *(a+i)!='\0'; i++){
        printf("%c", *(a+i)+n);
    }
}