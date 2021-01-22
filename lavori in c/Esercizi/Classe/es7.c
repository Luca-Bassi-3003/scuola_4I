/* 
Acquisire da tastiera una parola. Salvare la parola in
un vettore di caratteri di 50 caratteri. Stampare il numero
di vocali e di consonanti che formano la parola. 
 */

#include<stdlib.h>
#include<stdio.h>

void ricerca(char* a);

int main(){
    char p[50];

    printf("Inserisci la parola: ");
    scanf("%s", p);
    fflush(stdin);

    ricerca(p);
}

void ricerca(char* a){
    int i;
    int cntC=0;
    int cntV=0;

    for(i=0; a[i]!='\0'; i++){  //ape
        if(*(a+i)=='a' || *(a+i)=='e' || *(a+i)=='i' || *(a+i)=='o' || *(a+i)=='u'){
            cntV++;
        }else cntC++;
    }

    printf("il numero di vocali e' %d e il numero delle consonanti e' %d", cntV, cntC);
}