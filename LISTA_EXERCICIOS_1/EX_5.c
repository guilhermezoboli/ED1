#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int *v, int n){
    printf("DIGITE %d ELEMENTOS NO VETOR:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
}

void inverter(int v[], int n){
    int aux;
    for(int i=0; i<n/2; i++){
        aux=v[i];
        v[i]= v[n-1-i];
        v[n-1-i]=aux;
    }
}

int main(){
    int n;
    
    printf("DIGITE QUANTOS ELEMENTOS DESEJA NO VETOR:\n");
    scanf("%d", &n);
    
    int *v= (int*)malloc(n*sizeof(int));
    
    preencherVetor(v, n);
    inverter(v, n);
    
    printf("VETOR INVERTIDO\n");
    for(int i=0; i<n; i++){
        printf("%d\n", v[i]);
    }
    
    free(v);
}
