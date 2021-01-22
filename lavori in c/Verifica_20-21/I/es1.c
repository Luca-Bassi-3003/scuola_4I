/*
Scrivete una funzione che prese due stringhe a e b, 
ritorni l'indice della prima occorrenza di b in a

(quindi devo cercare 'b' in 'a' e restitire l'indice della prima lettera che trova)

########DA FINIRE
*/
#include<stdlib.h>
#include<stdio.h>

int find(char* a, char* b, char* p);
void copia(char* x, char* y);
int main(){
	int l=15;
    char str1[l];
	char str2[l];
    char p[l];
    printf("inserire la prima striga: ");
    scanf("%s", str1);
    printf("\ninserire la seconda striga: ");
    scanf("%s", str2);

    copia(str2, p);
    printf("\n\nla striga due compare nella prima stringa all'indice: %d",find(str1, str2, p));
}

int find(char* a, char* b, char* p){
    int i=0;
    int j=-1;
    //valutare il caso in cui b<a. quindi faccio un confronto cella per cella
    if(*a!=0 && *b!=0){
        if(*a == *b){
            j++;
            return find(*(a+1),*(b+1), p);
        }else{
            j=0;
            return find(*(a+1), p, p);
        }
        i++;
        return j;
    }
}

void copia(char* b, char* p){
    int i;
    for(i=0; i<='\0'; i++){
        *(p+i)=*(b+i);
    }
}
