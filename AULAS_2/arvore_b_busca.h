typedef struct arvore{
    int info;
    struct arvore* dir;
    struct arvore* esq;
}Arvorebin;

Arvorebin *busca(Arvorebin *a, int v);

Arvorebin *insere(Arvorebin *a, int v);