/*Fa�a um programa que exiba a soma de todos os n�meros naturais abaixo de 1.000
que s�o m�ltiplos de 3 ou 5.*/

#include <stdio.h>

int main(){
	
	int i, soma;
	
	printf("--------------------------------\n");
	printf("SOMA DE TODOS OS NUMEROS MULTIPLOS\n");
	printf("DE 3 E 5 ABAIXO DE 1000\n");
	printf("--------------------------------\n");
	
	for(i=1; i<1000 ;i++){
		
		if( i % 3 == 0 || i % 5 == 0 ){
			
		soma += i;
		
		}
	}
	
	printf("RESULTADO DA SOMA = %d", soma);
	printf("\n--------------------------------\n");
	
	return 0;
}
