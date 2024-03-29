/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/

#include <stdio.h>
#include <math.h>

int main(){

    float x1, y1, x2, y2, calculo;

    printf("--------------------------\n");
    printf("CALCULO DE DISTANCIA ENTRE\n");
    printf(" DOIS PONTOS NUM PLANO\n");
    printf("--------------------------\n");

    printf("Informe o eixo x do ponto 1: ");
    scanf("%f", &x1);
    printf("Informe o eixo y do ponto 1: ");
    scanf("%f", &y1);
    printf("Informe o eixo x do ponto 2: ");
    scanf("%f", &x2);
    printf("Informe o eixo y do ponto 2: ");
    scanf("%f", &y2);

    calculo = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));

    printf("--------------------------\n");
    printf("RESULTADO = %.4f\n", calculo);
    printf("--------------------------\n");

    return 0;
}