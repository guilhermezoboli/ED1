typedef struct nolista{
    float info;
    struct nolista *prox;
}Nolista;

typedef struct fila{
    Nolista *ini;
    Nolista *fim;
}Fila;

Fila *criarfila();

int estaVazia(Fila *f);

void inserir(Fila *f, float v);

void imprimeFila(Fila *f);

float remover(Fila *f);

void liberarFila(Fila *f);

void furaFila(Fila *f, float v);