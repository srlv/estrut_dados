#include"pilha.c"

int main(){
Pilha*p = pilha_cria();

pilha_push(p, 1);
pilha_push(p, 2);

pilha_imprime(p);
pilha_libera(p);
    return 0;
}