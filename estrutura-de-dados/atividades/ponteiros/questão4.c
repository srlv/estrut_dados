/*Crie um programa para calcular a área e o perímetro de um hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
hexágono regular são dados, respectivamente, por:
*/

//resolução:

#include <stdio.h>
#include <math.h>
#include<locale.h>
#include<stdlib.h>

void calcula_hexagono(float l, float *area, float *perimetro){ /*função para criar calculo do hexagono*/
    *perimetro = 6*l;             
    *area = (3*pow(l,2)*sqrt(3))/2;  
}

int main(void){

   //pedindo os dados para o usuário e encontrando o resultado da operação.
   
    setlocale(LC_ALL,"portuguese");
    float ld, area, per;
    printf("informe o lado ");
    scanf("%f", &ld); 
    calcula_hexagono(ld,&area,&per); 
    printf("Área = %.2f \n Perimetro = %.2f\n", area,per);
    return 0;
}
