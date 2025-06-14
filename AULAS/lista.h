#define MAX 10

typedef struct lista{
    int n;
    int itens[MAX];
}Lista;

Lista* criarlista();

int estaVazia(Lista *l);

int estaCheia(Lista *l);

void inserirElemento(Lista *l, int v);

void imprime(Lista *l);

void removerElementos(Lista *l, int posi);