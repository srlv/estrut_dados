#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct  frutas * insare(struct frutas * frutas, char * nome){
    struct frutas*novafruta=(struct frutas)malloc(sizeof(struct frutas));
    strcpy(novafruta->nome, nome);
    novafruta->proxima=fruta;
    return novafruta;
}

int main(void){
    struct frutas *lista=NULL;
    lista=insare(lista,"maca");
    lista=insare(lista,"abacate");
    lista=insare(lista"uva");
    free(lista);
 
return 0; 
}