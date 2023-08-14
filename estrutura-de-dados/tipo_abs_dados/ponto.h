/* TAD: Ponto (x, y)*/
/* tipo exportado */
typedef struct ponto Ponto;
/*funções exportadas */
Ponto*pto_cria(float x, float y);
void pto_libera(Ponto*p);
void pto_acessa(Ponto*p,float* x, float* y);
void pto_atribui(Ponto*, float x, float y);
float pto_distancia(Ponto*p1, Ponto* p2);