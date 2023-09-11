#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//lista encadeada simples de frutas 
typedef struct frutas{
char nome[10];
struct frutas * proxima;
}listafrutas;

int main(void){
 listafrutas * fruta1=malloc(sizeof(listafrutas));
 listafrutas * fruta2=malloc(sizeof(listafrutas));
 listafrutas * fruta3=malloc(sizeof(listafrutas));
// inicializa os nomes das frutas 
stpcpy(fruta1->nome, "maca");
stpcpy(fruta2->nome, "abacate");
stpcpy(fruta3->nome, "uva");
// faz o encadeamento dos espaços
listafrutas*p;
fruta1->proxima=fruta2;
fruta2->proxima=fruta3;
fruta3->proxima=NULL;
for(p=fruta1;p!=NULL;p=p->proxima){
    printf("%s\n",p->nome );
}  
return 0; 
}