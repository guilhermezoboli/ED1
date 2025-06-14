#include <stdio.h>
#include <stdlib.h>

typedef struct real{
    int left;
    int right;
}Real;


void leReal(Real *r){
    printf("DIGITE A PARTE INTEIRA DE UM NUMERO:");
    scanf("%d", &r->left);
    printf("DIGITE A PARTE FRACIONARIA DE UM NUMERO:");
    scanf("%d", &r->right);
}

void imprimeReal(Real *r){
    printf("%d.%d\n", r->left, r->right);
}

void soma(Real *r, Real *r1){
    Real r2;
    r->left=r->left*100;
    r1->left=r1->left*100;
    float soma;
    soma = r->left+r1->left;

}

int main(){
    Real r, r1;
    
    leReal(&r);
    leReal(&r1);
    printf("ESTRUTURA R:\n");
    imprimeReal(&r);
    printf("ESTRUTURA R1:\n");
    imprimeReal(&r1);
    
    
    
    
    
}
