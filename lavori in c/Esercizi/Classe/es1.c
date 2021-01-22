/* 
    Es1.
    Creare un algoritmo che ricevute due stringhe come parametri le concatena in una 
    stringa unica e la stampa a video.
*/
#include<stdlib.h>
#include<stdio.h>

void unione(char s[], char p[]);

int main(){
    char str[20];
    char str2[20];
    char box[40];

    printf("Iserisci stringa uno: ");
    scanf("%s", str);
    printf("\nInserisci stringa due: ");
    scanf("%s", str2);

    unione(str, str2);
}

void unione(char s[], char p[]){
    char box[40];
    int i;
    
   for(i=0; i<40; i++){
       if(s[i]!='\0'){
           box[i]=s[i];
           
       }else{
           int k=0;
           while(p[k]!='\0'){
               box[i]=p[k];
               i++;
               k++;
           }
           break;
       }
   }

    printf("La stringa unita e': %s", box);
}