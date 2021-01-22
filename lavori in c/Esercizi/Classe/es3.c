/* 

1. Realizzare un programma che acquisita ua matrice di stringhe in ordine casuale, 
le ordina e le stampa in ordine alfabetico crescente.

[0]zibibbo
[1]casa
[2]dado
[3]libro

[0]casa
[1]dado
[2]libro
[3]zibibbo

strcmp(st1, st2)
strcpy(st1,st2)
 */

#include<stdlib.h>
#include<stdio.h>

void ordinamento(char s[1][0]);

int main(int argc, char** argv){
    int n=1;
    do{
        printf("Iserisci stringa: ");
        scanf("%s\n", argv[n][0]);
        n++;
    }while(n<5);
    ordinamento(argv[1][0]);

}

void ordinamento(char s[1][0]){
    int i, j;

    for(i=0; i<5; i++){
        for(j=i; j<5; j++){
            if(strcmp(s[i][0], s[j][0])<0){  //-1 se la str1 è prima della due
                strcpy(s[i][0], s[j][0]);
            }else if(strcmp(s[j][0], s[i][0])>0){
                strcpy(s[i][0], s[j][0]);
            }
        }
        
    }