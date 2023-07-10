// Quais serão os valores de x, y e p ao final do trecho de código abaixo:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
    setlocale(LC_ALL,"portuguese");
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    return 0;
}
//resolução: após a analise dos valores de x, y e *p, podemos chegar ao resultado onde o valor final
// de X vai ser = 3, y = 4, *p irá mostrar o endereço de memória de y.
