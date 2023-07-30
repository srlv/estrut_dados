/*Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
produto (gostou/não gostou). Escreva um programa em C que:
a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.
b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.
c) determine a porcentagem de pessoas do sexo masculino que responderam que não
gostaram do produto.*/
 
//Resolução:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "portuguese");

    
    int np, c;
    int cf = 0, cm = 0;
    float pm, pf; 

   
    printf("Informe a quantidade de pessoas pesquisadas: ");
    scanf("%d", &np);

    // Alocação dinâmica de memória para armazenar as respostas de sexo e opinião
    char *sexo = (char*)malloc(np * sizeof(char));
    char *op = (char*)malloc(np * sizeof(char));

    // Verificação se houve erro na alocação de memória
    if (sexo == NULL && op == NULL) {
        printf("Erro de memória ao alocar os vetores.\n");
        return 1;
    } else {
        printf("Memória alocada com sucesso.\n");
    }

    // Loop para coletar as respostas dos participantes
    for (c = 0; c < np; c++) {
        printf("Resposta %d\n", c + 1);

        // Coleta do sexo da pessoa (M ou F)
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[c]);

        // Coleta da opinião da pessoa (gostou ou não gostou)
        printf("Opinião (g/n): ");
        scanf(" %c", &op[c]);
    }

    // Loop para contar quantas mulheres gostaram (cf) e quantos homens não gostaram (cm)
    for (c = 0; c < np; c++) {
        if (sexo[c] == 'F' && op[c] == 'g') {
            cf++;
        } else if (sexo[c] == 'M' && op[c] == 'n') {
            cm++;
        }
    }

    // Cálculo das porcentagens de mulheres que gostaram (pf) e homens que não gostaram (pm)
    pf = ((cf * 100) / (float)np);
    pm = ((cm * 100) / (float)np);

    // Impressão dos resultados
    printf("A quantidade de pessoas do sexo feminino que gostaram é: %.2f%%\n", pf);
    printf("A quantidade de pessoas do sexo masculino que não gostaram é: %.2f%%\n", pm);

    // Liberação da memória alocada dinamicamente
    free(op);
    free(sexo);

    return 0;
}
