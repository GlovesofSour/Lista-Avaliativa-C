/*Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite
um n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido*/

#include <stdio.h>

int main(){
	
	int num, maiorNumero=0, menorNumero;
	
	printf("--------------------------------\n");
	printf("   MAIOR E MENOR NUMERO\n");
	printf("--------------------------------\n");
	
	do{
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		 if (num < menorNumero && num >= 0){
            menorNumero =  num;
        }
        
         if (num > maiorNumero ){
            maiorNumero =  num;
        }
        
	}while(num>0);
	
		printf("--------------------------------");
		
	if(num<0){
		
		printf("\nO menor numero eh: %d", menorNumero);
		printf("\nO maior numero eh: %d", maiorNumero);
		printf("\n--------------------------------\n");
				
	}
	
	return 0;
}
