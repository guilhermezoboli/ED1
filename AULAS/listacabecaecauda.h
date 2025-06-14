typedef struct nolista{
    int info;
    struct nolista *prox;
}Nolista;

typedef struct lista{
    Nolista *cab;
    Nolista *cau;
}Lista;

void criarLista(Lista *l);

int estaVazia(Lista *l);

void inserirElementoInicio(Lista *l, int v);

void imprime(Lista *l);

void inserirElementoFim(Lista *l, int v);

void removerElemento(Lista *l, int v);

void liberarLista(Lista *l);