#include <stdio.h>
#include <string.h>

struct Fruta {
    char nome[50];
    char cor[20];
    char sabor[20];
    int quantidade;
};

int main() {
    struct Fruta frutas[100]; 
    int numFrutas = 0;
    int opcao;

    char nomeBusca[50]; 

    do {
       
        printf("\nMenu:\n");
        printf("1. Cadastrar nova fruta\n");
        printf("2. Listar todas as frutas cadastradas\n");
        printf("3. Buscar fruta por nome\n");
        printf("4. Sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
         if (numFrutas < 100) {
                    printf("Nome da fruta: ");
                    scanf("%s", frutas[numFrutas].nome);
                    printf("Cor da fruta: ");
                    scanf("%s", frutas[numFrutas].cor);
                    printf("Sabor da fruta: ");
                    scanf("%s", frutas[numFrutas].sabor);
                    printf("Quantidade da fruta: ");
                    scanf("%d", &frutas[numFrutas].quantidade);
                    numFrutas++;
                    printf("Fruta cadastrada com sucesso!\n");
                } else {
                    printf("Limite de frutas atingido!\n");
                }
                break;

           case 2:
    
    if (numFrutas > 0) {
        printf("Frutas cadastradas:\n");
        for (int i = 0; i < numFrutas; i++) {
            printf("Nome: %s\n", frutas[i].nome);
            printf("Cor: %s\n", frutas[i].cor);
            printf("Sabor: %s\n", frutas[i].sabor);
            printf("Quantidade: %d\n", frutas[i].quantidade);
            printf("\n");
        }
    } else {
        printf("Nenhuma fruta cadastrada ainda.\n");
    }
    break;

            case 3:
               
                printf("Digite o nome da fruta que deseja buscar: ");
                scanf("%s", nomeBusca);

                int encontradas = 0;
                for (int i = 0; i < numFrutas; i++) {
                    if (strcmp(frutas[i].nome, nomeBusca) == 0) {
                        printf("Fruta encontrada:\n");
                        printf("Nome: %s\n", frutas[i].nome);
                        printf("Cor: %s\n", frutas[i].cor);
                        printf("Sabor: %s\n", frutas[i].sabor);
                        printf("Quantidade: %d\n", frutas[i].quantidade);
                        printf("\n");
                        encontradas = 1;
                    }
                }

                if (!encontradas) {
                    printf("Fruta não encontrada com o nome especificado.\n");
                }
                break;

            case 4:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Escolha novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}