#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    float info;
    struct nolista *prox;
}NoLista;

typedef struct fila{
    NoLista *ini;
    NoLista *fim;
}Fila;

Fila *criarFila(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim =  NULL;
    return f;
}

int estaVazia(Fila *f){
    return (f->ini == NULL);
}

void inserir(Fila *f, float v){
    NoLista *novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = NULL;
        if(estaVazia(f)){
            f->ini = novo;
        }
        else{
            NoLista *ant = f->fim;
            ant->prox = novo;
        }
        f->fim = novo;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPACO\n");
    }
}

void imprime(Fila *f){
    if(!estaVazia(f)){
        for(NoLista *p = f->ini; p != NULL; p = p->prox){
            printf("%.2f\t", p->info);
        }
        printf("\n");
    }
    else{
        printf("Fila vazia\n");
    }
}

float maior(Fila *f){
    if(!estaVazia(f)){
        float maior = f->ini->info;
        for(NoLista *p = f->ini; p != NULL; p = p->prox){
            if(p->info > maior){
                maior = p->info;
            }
        }
        return maior;
    }
    else{
        printf("lista vazia\n");
        exit(1);
    }
}

void remover(Fila *f){
    if(!estaVazia(f)){
        NoLista *p;
        p = f->ini;
        f->ini = p->prox;
        if(f->ini == NULL){
            f->ini = f->fim;
        }
        free(p);
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

void combinaFila(Fila* f_res, Fila* f1, Fila* f2){
    if(estaVazia(f1)){
        if(estaVazia(f2)){
            printf("AS DUAS LISTAS ESTAO VAZIAS\n");
        }
        else{
            NoLista *temp;
            for(NoLista *p = f2->ini; p != NULL; p = temp){
                temp = p->prox;
                float v = p->info;
                inserir(f_res, v);
                free(p);
            }
        }
    }
    else if(estaVazia(f2)){
        NoLista *temp;
        for(NoLista *p = f1->ini; p != NULL; p = temp){
                temp = p->prox;
                float v = p->info;
                inserir(f_res, v);
                free(p);
            }
    }
    else{
        NoLista *p, *q;
        NoLista *tempP, *tempQ;
        for(p = f1->ini, q = f2->ini; p != NULL || q != NULL; p = tempP, q = tempQ){
            if(p != NULL){
                float aux1;
                aux1 = p->info;
                inserir(f_res, aux1);
                tempP = p->prox;
                free(p);
            }
            if(q != NULL){
                float aux2;
                aux2 = q->info;
                inserir(f_res, aux2);
                tempQ = q->prox;
                free(q);
            }
        }
    }
}

void combinaFilasRecursiva(Fila* f_res, Fila* f1, Fila* f2){
    
}

int main(){
    Fila *f_res = criarFila();
    Fila *f1 = criarFila();
    Fila *f2 = criarFila();

    //inserir(f1, 1);
    //inserir(f1, 3);
    //inserir(f1, 5);
    /*inserir(f2, 2);
    inserir(f2, 4);
    inserir(f2, 6);*/

    imprime(f1);
    imprime(f2);

    combinaFila(f_res, f1, f2);

    imprime(f_res);
    
}