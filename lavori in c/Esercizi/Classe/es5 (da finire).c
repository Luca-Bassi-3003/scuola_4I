/*
    Realizzare un programma che permetta di:
    1. Inserire un un nuovo libro nell'elenco (1 libro per volta e MAX 20 LIBRI).
    2. Ricercare un libro per titolo.
    3. Ricercare un libro per fascia di prezzo p_min<=x<=p_max (es. 5.50 <-> 10.99).
    0. USCITA


    Libro var;
    mi porta ad avere: 
    scanf... var.titolo
    scanf... var.autore
    scanf... var.n_pagine
    scanf... var.prezzo

    Libro var[];
    mi porta ad avere: 
    scanf... var->titolo
    scanf... var->autore
    scanf... var->n_pagine
    scanf... var->prezzo
*/
#include <stdio.h>
#include <conio.h>
#define DIM 20

typedef struct{
    char titolo[40];
    char autore[40];
    int n_pagine;
    float prezzo;    
}Libro;

void nuovo(Libro [], int*);
void cercaT(Libro ll[]);
void cercaP(Libro ll[]);

int main(){
    int n;
    Libro lib[20]; 
    int i=0;
    do{
        system("CLS");
        printf(" 1. Inserire un un nuovo libro nell'elenco.\n2. Ricercare un libro per titolo.\n3. Ricercare un libro per fascia di prezzo.\n0. USCITA\nFai una scelta:");
        scanf("%d", &n);
        fflush(stdin);
        
        switch(n){
            case 1:
               while(lib[i]<20){ //QUI
                    
                    if(lib->titolo=='\0'){

                    } nuovo(lib, &i);
                     i++;
               }
            break;

            case 2:
                    cercaP(lib);
            break;

            case 3:
                ff
            break;

            case 0:
               
        }
    }while(n!=0);
}

void nuovo(Libro ll[], int* p){
    printf("inserisci titolo libro: ");
    scanf("%s", ll->titolo);
    printf("inserisci autore libro: ");
    scanf("%s", ll->autore);
    printf("inserisci numero di pagine: ");
    scanf("%d", ll->autore);
    printf("inserisci prezzo libro: ");
    scanf("%f", ll->prezzo);
    p++;
}

void cercaP(Libro ll[]){
    int max, min;
    printf("Inserisci prezzo max:");
    scanf("%d" &max);
    printf("Inserisci prezzo min:");
     scanf("%d" &min);

     for(int i=0; i<20; i++){
         if(ll->prezzo<=max && ll->prezzo>= min){
             printf("libro: %s; prezzo %d", ll->titolo, ll->prezzo);
         }
     }
}

void cercaT();