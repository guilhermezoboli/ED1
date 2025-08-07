#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    float info;
    struct nolista *prox;
}Nolista;

typedef struct pilha{
    Nolista *prim;
}Pilha;

Pilha *criarPilha(){
    Pilha *p = (Pilha*)malloc(sizeof(Nolista));
    p->prim = NULL;
    return p;
}

int estaVazia(Pilha *p){
    return (p->prim == NULL);
}

void push(Pilha *p, float v){
    Nolista *novo = (Nolista*)malloc(sizeof(Nolista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = p->prim;
        p->prim = novo;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

float pop(Pilha *p){
    if(!estaVazia(p)){
        Nolista *t;
        t = p->prim;
        float temp = t->info;
        p->prim = t->prox;
        free(t);
        return temp;
    }
    else{
        printf("PILHA VAZIA\n");
        exit(1);
    }
}

void liberarPilha(Pilha* p) {
    Nolista* q, *temp;
    for(q=p->prim; q!=NULL; q = temp){
        temp = q->prox;
        free(q);
    }
    free(p);
    p = criarPilha();
}

void imprime(Pilha *p){
    if(!estaVazia(p)){
        for(Nolista *t = p->prim; t != NULL; t = t->prox){
            printf("%.2f\n", t->info);
        }
        printf("\n");
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

/*void concatenaPilhasCauxiliar(Pilha *p1, Pilha *p2){
    if(!estaVazia(p2)){
        for(Nolista *p = p2->prim; p2 != NULL; p = p->prox){
            float aux = pop(p2);
            push(p1, aux);
        }
    }
    else{
        printf("A PILHA P2 ESTA VAZIA\n");
    }
}*/

void concatenaPilhasPonteiro(Pilha *p1, Pilha *p2){
    if(!estaVazia(p2)){
        Nolista *t;
        for(t = p2->prim; t->prox != NULL; t = t->prox){}
        t->prox = p1->prim;
        p1->prim = p2->prim;
        
    }
    else{
        printf("A LISTA P2 ESTA VAZIA\n");
    }
    //liberarPilha(p2);
}

void concatenaPilhas(Pilha* p1, Pilha* p2){
    Pilha *auxPilha = criarPilha();


}

int main(){
    Pilha *p = criarPilha();
    Pilha *p1 = criarPilha();

    push(p, 1);
    push(p, 2);
    push(p, 3);
    push(p, 4);
    push(p1, 11);
    push(p1, 21);
    push(p1, 31);
    push(p1, 41);

    imprime(p);
    imprime(p1);

    concatenaPilhasPonteiro(p, p1);

    imprime(p);

}