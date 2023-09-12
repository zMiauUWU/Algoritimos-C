#include <stdio.h>

int main() {
    float base, altura, area;

    // Solicita a entrada do usuário para a base e altura do triângulo
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    // Calcula a área do triângulo
    area = (base * altura) / 2;

    // Exibe o resultado
    printf("A area do triangulo eh: %.2f\n", area);

    return 0;
}