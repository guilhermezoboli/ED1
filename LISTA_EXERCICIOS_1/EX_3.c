#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double aproximacaoPI(int n){
    double aprox = 0;
    for(int i = 0; i<=n; i++){
        aprox += pow(-1, i)/(2*i+1);
    }
    return 4*aprox;
}

int main(){
    int n;

    printf("DIGITE O NUMERO DE TERMOS PARTA A APOXIMACAO DE PI:\n");
    scanf("%d", &n);

    printf("APROXIMCAO DE PI:%lf", aproximacaoPI(n));
}
