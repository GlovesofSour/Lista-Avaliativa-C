/*4. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
“Eixo Y”, conforme for a situação.*/

#include <stdio.h>

int main(){

    int x, y;

    printf("--------------------------\n");
    printf("LOCALIZADOR DE COORDENADAS\n");
    printf("--------------------------\n");

    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);

    printf("--------------------------\n");
    
    if(x>0 && y>0){
        printf("Quadrante 1\n");
    }

    if(x<0 && y>0){
        printf("Quadrante 2\n");
    }

    if(x<0 && y<0){
        printf("Quadrante 3\n");
    }

    if(x>0 && y<0){
        printf("Quadrante 4\n");
    }

    if(x==0){
        printf("Eixo Y\n");
    }

    if(y==0){
        printf("Eixo X\n");
    }

    if(x==0 && y==0){
        printf("Origem\n");
    }
    printf("--------------------------\n");

    return 0;
}