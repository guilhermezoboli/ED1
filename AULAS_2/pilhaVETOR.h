#define MAX 5

typedef struct pilha{
    float info[MAX];
    int n;
}Pilha;

Pilha *criarPilha();

int estaVazia(Pilha *p);

int estaCheia(Pilha *p);

void push(Pilha *p, float v);

void imprime(Pilha *p);

float pop(Pilha *p);