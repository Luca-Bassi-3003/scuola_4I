/* 
Es2.
Creare un programma che richiede in input una stringa di più parole, suddivide la 
stringa in singole parole e le comunica a video.
 */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void separa(char s[]);

int main(){
    char str[15];

    printf("Iserisci stringa uno: ");
    gets(str);

    separa(str);
}

void separa(char s[]){
    int i;

    for(i=0; s[i]!='\0'; i++){
       if(s[i]!=' '){
           printf("%c", s[i]);
       }else printf("\n");
    }
}