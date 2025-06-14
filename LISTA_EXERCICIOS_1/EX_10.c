#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SomaSerie(int i, int j, int k){
    if(i<=j){
        return i+SomaSerie(i, j, k);
        i++;
    }else{
        return 1;
    }
}

int main(){
    int i, j, k;

    printf("DIGITE UM NUMERO:\n");
    scanf("%d", &i);
    printf("DIGITE UM NUMERO MAIOR:\n");
    scanf("%d", &j);
    printf("DIGITE UM NUMERO PARA SER SOMADO A SEQUENCIA:\n");
    scanf("%d", &k);

    printf("%d", SomaSerie(i, j, k));
}