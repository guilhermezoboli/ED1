typedef struct nolista{
    int info;
    struct nolista *prox;
}Nolista;

void criarLista(Nolista **l);

void inserirElementoInicio(Nolista **l, int v);

void imprime(Nolista **l);

Nolista *ultimo(Nolista **l);

int maiores(Nolista **l, int n);

Nolista *concatena(Nolista **l1, Nolista **l2);

int estaVazia(Nolista **l);

Nolista *separa(Nolista **l, int n);

void imprimeRecursiva(Nolista **l);

void liberarLista(Nolista **l);

Nolista *buscaRecursiva(Nolista **l, int v);

void removerElemento(Nolista **l, int v);