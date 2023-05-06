/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos 
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>

int fibonacci(int n);

int main() {
    int num;

    printf("--------------------------\n");
    printf(" N NUMERO DA SEQUENCIA\n");
    printf("     DE FIBONACCI\n");
    printf("--------------------------\n");

    printf("Digite o valor de n: ");
    scanf("%d", &num);

    printf("--------------------------\n");
    printf("O %do termo da sequencia de Fibonacci: %d\n", num, fibonacci(num));
    printf("--------------------------\n");

    return 0;
}

fibonacci(int n) {
    if (n <= 1) {

        return n;
    } else {

        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}