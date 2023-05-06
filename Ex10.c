/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#define TAM 10

int main(){

    int num[TAM], i, soma, media;

    printf("--------------------------\n");
	printf("    MEDIA DE NUMEROS\n");
	printf("--------------------------\n");

    for(i=1; i<=TAM; i++){

        printf("Informe o %d numero: ", i);
        scanf("%d", &num[i]);

        soma += num[i];
    }

    media = soma / TAM;
    printf("--------------------------\n");
    printf("A media dos numeros eh: %d\n", media);
    printf("--------------------------\n");
    
    return 0;
}
