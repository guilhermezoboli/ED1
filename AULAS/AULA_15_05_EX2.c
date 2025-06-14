#include <stdio.h>
#include <stdlib.h>

char inverterletra( char a ){
    return a+32;
}
int main (int argc, char *argv[]) {
    char a;
    char inv;

    printf("DIGITE UMA LETRA MINUSCULA:\n");
    scanf("%c", &a);

    inv = inverterletra(a);

    printf("%c\n", inv);
    return EXIT_SUCCESS;
}