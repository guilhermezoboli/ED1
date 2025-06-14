typedef struct nolista{
    int info;
    struct nolista *prox;
}NoLista;

void criarlista(NoLista **l);

int estaVazia(NoLista **l);

void imprime(NoLista **l);

void insereElemento(NoLista **l, int v);

int numElementos(NoLista **l);

NoLista* busca(NoLista **l, int v);

void removerElemento(NoLista **l, int v);

void liberarLista(NoLista **l);

void insereOrdenado(NoLista **l, int v);

NoLista* ponteiroULTIMO(NoLista **l);