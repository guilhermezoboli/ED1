typedef struct nolista{
    int info;
    struct nolista* p;
}NoLista;

typedef struct descritor{
    NoLista *prim;
    NoLista *ult;
    int n;
}Descritor;

void criarlista(Descritor *l);

int estaVazia(Descritor *l);

void insereElementoInicio(Descritor *l, int v);

void insereElementoFim(Descritor *l, int v);

void imprimeLista(Descritor *l);

void removerElemento(Descritor *l, int v);

void liberarLista(Descritor*l);

NoLista* buscarElemento(Descritor *l, int v);
