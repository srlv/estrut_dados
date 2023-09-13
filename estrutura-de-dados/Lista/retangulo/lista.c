struct retangulo{
    float b;
    float h;
};
typedef struct retangulo Retangulo;

struct lista{
    Retangulo info;
        struct lista *prox;
    };

    static Lista* aloca(floab b, float h ){
        Lista* p = (Lista*)malloc(sizeof(Lista));
        p->info.b = b;
        p->info.h = h;
        p->prox = NULL;
        return p;
    }
