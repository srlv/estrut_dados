

typedef struct _fila Fila;
Fila *Criafila(int MAX_SIZE);
void Destruirfila(Fila **Q);
int Filavazia(Fila *Q);
int Filacheia(Fila *Q);
int Inserefila(Fila *Q, int elem);
int Removefila(Fila *Q);
int Consultafila(Fila *Q, int *elem);
