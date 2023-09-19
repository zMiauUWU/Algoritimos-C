#include <stdio.h>

int main() {
    float base, altura, area;

   
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;


    printf("A area do triangulo eh: %.2f\n", area);

    return 0;
}