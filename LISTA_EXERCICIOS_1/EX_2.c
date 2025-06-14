#include <stdio.h>
#include <stdlib.h>

int somaimpares(int n){
    int soma=0;
    for(int i = 1; i<=(n*2); i++){
        if(!(i%2==0)){
            soma += i;
        }
    }
    return soma;
}

int main(){
    int n;
    
    printf("DIGITE QUANTOS NUMEROS IMPARES DESEJA SOMAR:\n");
    scanf("%d", &n);
    
    int soma;
    
    soma = somaimpares(n);
    
    printf("SOMA:%d\n", soma);
    
}
