#include <stdio.h>
#include <stdlib.h>

typedef struct nolista{
    int info;
    struct nolista *prox;
}Nolista;

void criarLista(Nolista **l){
    *l=NULL;
}

int ListaVazia(Nolista **l){
    if(*l==NULL){
        return 1;
    }
    return 0;
}

void insereElementoInicio(Nolista **l, int v){
    Nolista*novo = (Nolista*)malloc(sizeof(Nolista));
    if(novo!=NULL){
        novo->info=v;
        novo->prox=*l;
        *l=novo;
    }else{
       printf("NAO FOI POSSIVEL ALOCAR MEMORIA\n");
    }
}

void exibirElementos(Nolista **l){
    Nolista *p;
    if(!ListaVazia(l)){
        for(p=*l; p!=NULL; p=p->prox){
            printf("%d ", p->info);
        }
        printf("\n");
    }
}

Nolista* buscaElementos(Nolista **l, int v){
    Nolista *p;
    for(p=*l; p!=NULL; p=p->prox){
        if(p->info==v){
            return p;
        }
    }
    return NULL;
}

void removerElemento(Nolista **l, int v){
    Nolista *p;
    Nolista *ant;
    for(p=*l; p!=NULL && p->info!=v; p  = p->prox){
        ant = p;
    }
    if(p==NULL){
        printf("ELEMENTO NAO ENCONTRADO\n");
    }
    else{
        if(ant==NULL){
            *l=p->prox;
        }
        else{
            ant->prox=p->prox;
        }
    }
}

void liberarLista(Nolista **l){
    Nolista *p, *temp;
    for(p=*l; p!=NULL; p=temp){
        temp=p->prox;
        free(p);
    }
    *l=NULL;
}


int main(){
    Nolista *l;

    criarLista(&l);

    insereElementoInicio(&l, 10);
    insereElementoInicio(&l, 15);
    insereElementoInicio(&l, 1);
    insereElementoInicio(&l, 9);

    exibirElementos(&l);

    if(buscaElementos(&l, 1)!=NULL){
        printf("ELEMENTO ENCONTRADO\n");
    }else{
        printf("ELEMENTO NAO ENCONTRADO\n");
    }

    removerElemento(&l, 1);

    exibirElementos(&l);

}