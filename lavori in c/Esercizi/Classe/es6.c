/* 

Realizzare un programma che memorizzi un elenco di persone, ogni persona è identificata da Cognome, Nome e data di nascita. La data è però a sua volta suddivisa in anno, mese, giorno, ed è una struttura interna quella generale Persona.
Realizzare:
1. inserimento di una persona.
2. Lista di tutte le persone e relative date di nascita.
3. Ricerca per cognome o per anno di nascita.
4. Modifica della data di una specifica persona.
5. Modifica cognome e nome di una specifica persona.
6. Rimozione di una specifica persona.
 */

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

typedef struct{
    int giorno;
    int mese;
    int anno;
}Data;

typedef struct{
    char nome[15];
    char cognome[15];
    Data nascita;
}Persona;

int main(){
    Persona p1[10];
    printf("%d %d", sizeof(Data),sizeof(Persona));

   /* printf("inserisci il nome: ");
    scanf("%s", p1.nome);

    printf("\ninserisci il cognome: ");
    scanf("%s", p1.cognome);

    printf("\ninserisci giorno di nascita: ");
    scanf("%d", &p1.nascita.giorno);

    printf("\ninserisci mese di nascita:");
    scanf("%d", &p1.nascita.mese);

    printf("\ninserisci anno di nascita:");
    scanf("%d", &p1.nascita.anno);

    printf("%s %s %d %d %d", p1.nome, p1.cognome, p1.nascita.giorno, p1.nascita.mese, p1.nascita.anno);*/
}