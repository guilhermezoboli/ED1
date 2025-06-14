#include <stdio.h>
#include <stdlib.h>

void recebermatriz(int **m, int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("DIGITE O ELEMENTO DA LINHA %d E COLUNA %d\n", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void exibirmatriz(int **m, int linhas, int colunas){
    printf("MATRIZ LIDA\n");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void exibirmatrizTRANSPORTA(int **m, int linhas, int colunas){
    printf("MATRIZ TRANSPOSTA\n");
    for(int i=0; i<colunas; i++){
        for(int j=0; j<linhas; j++){
            printf("%d\t", m[j][i]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]){

    int nl, nc;

    printf("CRIANDO UMA MATRIZ:\n");
    printf("NUMERO DE LINHAS:\n");
    scanf("%d", &nl);
    printf("NUMERO DE COLUNAS:\n");
    scanf("%d", &nc);

    int**m = (int**)malloc(nl*sizeof(int ));

    for(int i = 0; i<nl; i++){
        m[i]=(int*)malloc(nc*sizeof(int));
    }

    recebermatriz(m, nl, nc);
    exibirmatriz(m, nl, nc);
    exibirmatrizTRANSPORTA(m, nl, nc);
    
    return 0;
}
