#include"fila.c"
int main(void){
Fila *Q;

Fila *Q = Criafila(50);

Destruirfila(&Q);

int Filavazia = Filavazia(Q);

int cheia = Filacheia(Q);

Inserefila(Q, 10);

Removefila(Q);

int elem;
Consultarfila(Q, &elem);




    return 0;
}