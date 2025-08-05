typedef struct arvore{
    char info;
    struct arvore* dir;
    struct arvore* esq;
}Arvore;

Arvore* criarArvoreVazia();

Arvore* criarArvore(char c, Arvore *sae, Arvore *sad);

int estaVazia (Arvore *arv);

void imprimeArvore (Arvore *arv);

Arvore* liberarArv (Arvore *arv);

int pertence (Arvore *arv, char c);

int numeroNos(Arvore *arv);