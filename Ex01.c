/*1. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)*/

#include <stdio.h>

int main(){

    int a,b,c,d, diferenca;

    printf("--------------------------\n");
    printf("CALCULO DE DIFERENCA ENTRE PRODUTOS\n");
    printf("--------------------------\n");

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    printf("Informe o valor de C: ");
    scanf("%d", &c);
    printf("Informe o valor de D: ");
    scanf("%d", &d);

    diferenca = a*b-c*d;

    printf("--------------------------\n"); 
    printf("DIFERENCA = %d * %d - %d * %d\n", a,b,c,d);   
    printf("DIFERENCA = %d\n", diferenca);
    printf("--------------------------\n");

    return 0;
}