#include<stdio.h>
#include"ponto.h"
int main(void){
    ponto* p = pto_cria(2.0,1.0);
    ponto* q = pto_cria(3.4,2.1);
    float d = pto_distancia(p,q);
    printf("distancia entre pontos: %f\n", d);
    pto_libera(q);
    pto_libera(p);
    return 0;
}