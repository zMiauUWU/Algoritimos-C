#include <stdio.h>

int main() {
    float valorReais, taxaCambio, valorDolar;

    // Solicita a entrada do usuário para o valor em reais e a taxa de câmbio
    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    printf("Digite a taxa de cambio (quantos dolares valem 1 real): ");
    scanf("%f", &taxaCambio);

    // Calcula o valor em dólar
    valorDolar = valorReais / taxaCambio;

    // Exibe o valor em dólar
    printf("%.2f reais equivalem a %.2f dolares.\n", valorReais, valorDolar);

    return 0;
}
