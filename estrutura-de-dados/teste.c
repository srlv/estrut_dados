#include <stdio.h>
#include <stdlib.h>

typedef struct dados_p {
    char nome[30];
    char disciplina[30];
    float regime_t;
} dados;

void preenche(dados *rgt) {
    printf("Informe seu nome\n");
    scanf(" %[^\n]", rgt->nome);

    printf("Informe sua disciplina\n");
    scanf(" %[^\n]", rgt->disciplina);

    printf("Informe seu regime horário\n");
    scanf("%f", &rgt->regime_t);
}

void imprime(dados *rgt) {
    printf("Seu nome é %s\n", rgt->nome);
    printf("Sua disciplina é %s\n", rgt->disciplina);
    printf("Seu regime é %.2f horas\n", rgt->regime_t);
}

void novosalario(dados *novoslr, float novo) {
    novoslr->regime_t = novo;
    printf("Informe o seu novo regime horário\n");
    scanf("%f", &novoslr->regime_t);
}

int main(void) {
    dados pessoas;
    preenche(&pessoas);
    imprime(&pessoas);

    
   
    float novo_regime;
   
    novosalario(&pessoas, novo_regime);

    printf("Seu novo valor:\n");
    imprime(&pessoas);

    return 0;
}