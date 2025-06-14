#include <stdio.h>

int potencia(int x, int y){
    if(y>0){
        y--;
        return x*potencia(x, y);
    }else{
        return 1;
    }
}

int main(){
    int x, y;
    
    printf("DIGITE A BASE DA POTENCIA:\n");
    scanf("%d", &x);
    printf("DIGITE O EXPOENTE DA POTENCIA:\n");
    scanf("%d", &y);
    
    printf("%d", potencia(x, y));

    return 0;
}
