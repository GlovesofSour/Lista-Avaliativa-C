/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos 
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>

int main(){

    int  num=0, i=0, fibonacci=0, t1=0, t2=13;

    printf("------------------------------------\n");
    printf(" ENESIMO TERMO DA SEQUENCIA DE\n");
    printf("           FIBONACCI\n");
    printf("------------------------------------\n");

    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        
        if(num < 0){
        	printf("Numero invalido, tente novamente!\n");
		}	
    }while(num < 0);

    for(i=0; i<num; i++){
        t1 = t2;
        t2 = fibonacci;
        fibonacci =+ t1 + t2;
    }

    printf("------------------------------------\n");
    printf("O %do termo da sequencia de Fibonacci eh: %d\n", num, fibonacci);
    printf("------------------------------------\n");

    return 0;
}
