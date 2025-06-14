#include <stdio.h>
#include <stdlib.h>
#define MAX 10


typedef struct lista{
    int n;
    int itens[MAX];
}Lista;

Lista* criarlista(){
    Lista *l = (Lista*) malloc(sizeof (Lista));
    if(l!= NULL){
        l-> n =0;
        return l;
    }
    else{
        printf("NAO FOI POSSIVEL ALOCAR ESPAÇO\n");
    }
}

int estaVazia(Lista *l){
    if(l-> n == 0 ){
        return 1;
    }
    else{
        return 0;
    }
}

int estaCheia(Lista *l){
    if(l-> n == MAX){
        return 1;
    }
    else{
        return 0;
    }
}

void inserirElemento(Lista *l, int v){
    if(!estaCheia(l)==1){
        l->itens[l->n]=v;
        l->n++;
    }
    else{
        printf("LISTA CHEIA\n");
    }
}

void imprime(Lista *l){
    printf("LISTA:\n");
    if(!estaVazia(l)){
        for(int i=0; i<l->n;i++){
            printf("%d\n", l->itens[i]);
        }
        printf("\n");
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

void removerElementos(Lista *l, int posi){
    if(posi>= 1 && posi<= l->n){
        for(int i = posi; i<l->n-1; i++){
        l->itens[i - 1]=l->itens[i];
        }
    l->n--;
    }
}