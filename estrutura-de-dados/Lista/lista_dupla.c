struct lista2{
    int info;
    struct lista2* ant;
    struct lista2* prox;
}
typedef struct lista2 Lista2;
/*inserção no iniccio*/
Lista2* lst2_insere(Lista2*l, int v){
    Lista2* novo = (Lista2*)malloc(sizeof(Lista2));
    novo->info=v;
    novo->prox=l;
    novo->ant=NULL;
    /*verifica se lista não está vazia*/
    if(l!= NULL)
    l->ant = novo;
 return novo;
}
Lista2* lst_retira(Lista2* l, int v ){
    Lista2* p = lst2_busca(l,v);

    if(p==NULL)
    return 1; /*não achou elemento*/
 /*retira elemento do encadeamento*/
 if(l==p)/*testa se é o primeiro elemento*/
 l = p->prox;
 else 
 p->ant->prox=p->prox;

if(p->prox != NULL)/*tseta se é o ultimo elemento*/
p->prox->ant=p->ant;

free(p);
return 1;
}