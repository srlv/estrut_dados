#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct dados_bancarios {
    char nome[20];
    int agencia;
    int num_conta;
    int senha;
    float saldo;
} dados;

int main(void) {
    setlocale(LC_ALL, "portuguese");
    int c;
    dados var_pessoa[5];

    for (c = 0; c < 5; c++) {
        printf("Digite o nome:\n");
        scanf("%s", var_pessoa[c].nome);

        printf("Digite a agencia:\n");
        scanf("%d", &var_pessoa[c].agencia);

        printf("Digite o número da conta:\n");
        scanf("%d", &var_pessoa[c].num_conta);

        printf("Digite a senha:\n");
        scanf("%d", &var_pessoa[c].senha);

        printf("Informe seu saldo:\n");
        scanf("%f", &var_pessoa[c].saldo);

        printf("\n");
        printf("Os dados informados para a conta %d:\n", c+1);
        printf("Nome: %s\n", var_pessoa[c].nome);
        printf("Agência: %d\n", var_pessoa[c].agencia);
        printf("Número da conta: %d\n", var_pessoa[c].num_conta);
        printf("Senha: %d\n", var_pessoa[c].senha);
        printf("Saldo: %.2f\n", var_pessoa[c].saldo);
        printf("\n");
    }

    return 0;
}