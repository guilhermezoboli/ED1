#include <stdio.h>
#include <stdlib.h>
#include "filaVETOR.h"

Fila *criarFila(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    if(f != NULL){
        f->ini = f->n = 0;
        return f;
    }
    else{
        printf("ERRO AO ALOCAR MEMORIA\n");
        return NULL;
    }
}

int estaVazia(Fila *f){
    return (f->n == 0);
}

int estaCheia(Fila *f){
    return (f->n == N);
}

void inserir(Fila *f, float v){
    if(!estaCheia(f)){
        int fim = (f->ini + f->n) % N;
        f->info[fim] = v;
        f->n++;
    }
    else{
        printf("FILA CHEIA\n");
    }
}

void imprimirFila(Fila *f){
    if(!estaVazia(f)){
        int indi;
        for(int i = 0; i < f->n; i++){
            indi = (f->ini + i) % N;
            printf("%.2f\n", f->info[indi]);
        }
    }
    else{
        printf("FILA VAZIA\n");
    }
}

float remover(Fila *f){
    if(!estaVazia(f)){
        float v = f->info[f->ini];
        f->ini = (f->ini + 1) % N;
        f->n --;
        return N;
    }
    else{
        printf("LISTA VAZIA\n");
    }
}

void liberarFila(Fila *f){
    free(f);
    printf("LISTA LIBERADA\n");
}