#include <stdio.h>
#include <stdlib.h>

void somaeproduto(int x, int y, int *soma, int *mult){
    *soma= x+y;
    *mult= x*y;
}
void trocavalores(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
int main(int argc, char** argv) {
    int x, y, soma, mult;
    
    printf("DIGITE O PRIMEIRO NUMERO PARA X:\n");
    scanf("%d", &x);
    printf("DIGITE O SEGUNDO NUMERO PARA Y:\n");
    scanf("%d", &y);
    
    somaeproduto(x, y, &soma, &mult);
    
    printf("SOMA: %d\tMULTIPLICAÇÃO:%d\n", soma, mult);
    
    trocavalores(&x, &y);
    
    printf("TROCA DE VALORES DE X E Y\n");
    printf("X:%d\t y:%d\n", x, y);
    
    return (EXIT_SUCCESS);
}