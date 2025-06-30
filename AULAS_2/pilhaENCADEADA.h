typedef struct noLista{
    float info;
    struct noLista *prox;
}NoLista;

typedef struct pilha{
    NoLista *prim;
}Pilha;

Pilha* criarLista();

int estaVazia(Pilha *p);

void push(Pilha *p, float v);

void imprimePilha(Pilha *p);

float pop(Pilha *p);

void liberarPilha(Pilha *p);