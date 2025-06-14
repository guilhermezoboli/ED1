#include <stdio.h>
#include <stdlib.h>

int fibRecursiva(int x){
    if(x<=1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    else{
        return fibRecursiva(x-1)+fibRecursiva(x-2);
    }
}

int fibiterariva(int n){
    int a, b, c;
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    else{
        a=0;
        b=1;
        for(int i=0; i<n-2; i++){
            c = a + b;
            a=b;
            b=c;
        }
        return b;
    }
}

int main(){
    int x, f, j;

    printf("DIGITE UM NUMERO:\n");
    scanf("%d", &x);
    
    f = fibRecursiva(x);

    printf("O NUMERO %d DE FIBONACCI E: %d\n", x, f);

    j = fibiterariva(x);

    printf("FIB ITERATIVO: %d", j);
}