/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra. */

#include <stdio.h>

int main(){

	float acao, total = 0;
	int abacaxi=0, maca=0, pera=0;

	printf("--------------------------\n");
	printf("	FEIRA DA FRUTA\n");
	printf("--------------------------\n");
	 
	printf("Selecione o produto que deseje comprar:");

	printf("\n\n\t1 => ABACAXI\t\tR$5,00 a unidade\n\t2 => MACA\t\tR$1,00 a unidade\n\t3 => PERA\t\tR$4,00 a unidade\n>");
	scanf("%f", &acao);
	
	while (acao > 0 && acao < 4){
	
		if(acao==1){
			printf("Abacaxi adicionado ao carrinho\n");
		abacaxi++;
	}
		if(acao==2){
			printf("Maca adicionada ao carrinho\n");
		maca++;
	}
		if(acao==3){
			printf("Pera adicionada ao carrinho\n");
		pera++;
	}

	total= abacaxi*5.0+ maca*1.0 + pera*4.0;
		printf("No carrinho: Abacaxi: %d, Maca: %d, Pera: %d\n", abacaxi, maca, pera);
		printf("Digite novamente para adicionar mais itens ao carrinnho ou 0 para finalizar: ");
		scanf("%f", &acao);
	}	
	printf("--------------------------\n");
	printf("%d Abacaxis: R$%.2f\n", abacaxi, abacaxi*5.0);
	printf("%d Macas: R$%.2f\n", maca, maca*1.0);
	printf("%d Peras: R$%.2f\n", pera, pera*4.0);
	printf("\ntotal: R$%.2f \n", total);
	printf("--------------------------\n");
	
    return 0;
}
