#define N 5

typedef struct fila{
    float info[N];
    int n;
    int ini;
}Fila;

Fila *criarFila();

int estaVazia(Fila *f);

int estaCheia(Fila *f);

void inserir(Fila *f, float v);

void imprimirFila(Fila *f);

float remover(Fila *f);

void liberarFila(Fila *f);