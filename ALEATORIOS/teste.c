#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maskify(char c[]){
    int tam;
    tam = strlen(c);
    for(int i=0; i<(tam-4); i++){
        c[i]='#';
    }
}

int main (int argc, char *argv[]) {
    char c[100];

    printf("DIGITE UMA SENHA:\n");
    scanf("%s", c);

    maskify(c);

    printf("%s\n", c);

    return EXIT_SUCCESS;
}
