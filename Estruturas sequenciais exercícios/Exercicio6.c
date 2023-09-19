#include <stdio.h>

int main() {
    float valorReais, taxaCambio, valorDolar;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    printf("Digite a taxa de cambio (quantos dolares valem 1 real): ");
    scanf("%f", &taxaCambio);

    valorDolar = valorReais / taxaCambio;

    printf("%.2f reais equivalem a %.2f dolares.\n", valorReais, valorDolar);

    return 0;
}
