/*3. Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera
sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o
conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é
outro inteiro
*/

#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(){

    float R, area, volume;

    printf("--------------------------\n");
    printf("    CALCULO DA AREA E\n");
    printf("   VOLUME DE UMA ESFERA\n");
    printf("--------------------------\n");

    printf("Informe o raio da esfera: ");
    scanf("%f", &R);

    area = 4 * pi * pow(R, 2.0);
    volume = (4.0/3) * pi * pow(R, 3.0);

    printf("--------------------------\n");
    printf("AREA = %.4f\n", area);
    printf("VOLUME = %.4f\n", volume);
    printf("--------------------------\n");

    return 0;
}