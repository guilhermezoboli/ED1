#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    int info;
    struct nolista *prox;
}Nolista;

void criarLista(Nolista **l){
    *l=NULL;
}

int estaVazia(Nolista **l){
    if(*l==NULL){
        return 1;
    }
    return 0;
}

void inserirElementoInicio(Nolista **l, int v){
    Nolista *novo = (Nolista*)malloc(sizeof(Nolista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = *l;
        *l = novo;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR MEMORIA\n");
    }
}

void imprime(Nolista **l){
    Nolista *p;
    for(p = *l; p != NULL; p = p->prox){
        printf("%d ", p->info);
    }
    printf("\n");
}

Nolista *ultimo(Nolista **l){
    Nolista *p;
    for(p = *l; p != NULL; p = p->prox){
        if(p->prox == NULL){
            return p;
        }
    }
}

int maiores(Nolista **l, int n){
    Nolista *p;
    int num = 0;
    for(p = *l; p!=NULL; p = p->prox){
        if(p->info > n){
            num ++;
        }
    }
    return num;
}

Nolista *concatena(Nolista **l1, Nolista **l2){
    if(estaVazia(l1)){
        *l1 = *l2;
        return *l1;
    }
    Nolista *p;
    p = ultimo(l1);
    p->prox = *l2;
    return *l1;
}

Nolista *separa(Nolista **l, int n){
    Nolista *p;
    Nolista *temp;
    for(p = *l; p->prox!=NULL && p->info!=n; p=p->prox);
    if(p == NULL){
        printf("ELEMENTO NAO ENCONTRADO\n");
    }
    else{
        Nolista *l2;
        criarLista(&l2);
        l2 = p->prox;
        p->prox = NULL;
        return l2;
    }
}

void imprimeRecursiva(Nolista **l){
    Nolista *p;
    p = *l;
    if(p != NULL){
        printf("%d ", p->info);
        p = p->prox;
        return imprimeRecursiva(&p);
    }
    printf("\n");
}

void imprimeRecursivaINVERTIDA(Nolista **l){
    
}

void liberarLista(Nolista **l){
    Nolista *p;
    p = *l;
    if(p != NULL){
        liberarLista(&(p->prox));
        free(p);
    }else{
        printf("LISTA VAZIA\n");
    }
    *l=NULL;
}

Nolista *buscaRecursiva(Nolista **l, int v){
    Nolista *p;
    p = *l;
    if(p!=NULL){
        if(p->info != v){
            p = p->prox;
            return buscaRecursiva(&p, v);
        }
        else{
            return p;
        }
    }
    return NULL;
}

void removerElemento(Nolista **l, int v){
    if((*l)->prox!=NULL && (*l)->info!=v){
        removerElemento(&(*l)->prox, v);
    }
    else if((*l)->info == v){
        Nolista *temp = *l;
        *l = (*l)->prox;
        free(temp);
    }
    else{
        printf("ELEMENTO NAO ENCONTRADO\n");
    }
}