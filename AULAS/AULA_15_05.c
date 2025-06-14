#include <stdio.h>
#include <stdlib.h>

float media(float vet[], float n){
    int soma=0;
    for(int i =0; i<n; i++){
        soma += vet[i];
    }

    return soma/n;
}

int main(){
    int n;

    printf("QUANTOS ELEMENTOS DESEJA NO VETOR:\n");
    scanf("%d", &n);

    float *vet;

    vet = (float*) malloc(n*sizeof(float));

    if(vet != NULL){
        for(int i=0; i<n; i++){
            printf("DIGITE UM NUMERO PARA O VETOR NA POSICAO %d:\n", i);
            scanf("%f", &vet[i]);
        }
    
        printf("A MEDIA E: %.2f", media(vet, n));

        free(vet);
    }
    else{
        printf("ERRO AO ALOCAR MEMORIA\n");
    }
}