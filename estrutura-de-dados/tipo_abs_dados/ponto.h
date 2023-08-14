/* TAD: Ponto (x, y)*/
/* tipo exportado */
typedef struct ponto Ponto;
/*funções exportadas */
ponto*pto_cria(float x, float y);
void pto_libera(ponto*p);
void pto_acessa(ponto*p,float* x, float* y);
void pto_atribui(ponto*, float x, float y);
float pto_distancia(ponto*p1, ponto* p2);


