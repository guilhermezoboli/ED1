#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE* arq = fopen("arq.txt" , "r");
    FILE* arqminusculo = fopen("arqminusculo.txt", "w");

    if(arq != NULL && arqminusculo != NULL){
        
        char c;

        while(fscanf(arq, "%c", &c) == 1){
            c = tolower(c);
            fprintf(arqminusculo, "%c", c);
        }
        
        fclose(arqminusculo);
        fclose(arq);
    }
    else{
        printf("NAO FOI POSSIVEL ABRIR O ARQUIVO\n");
    }
}