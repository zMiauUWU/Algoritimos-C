#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita a entrada do usuário para a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converte a temperatura para graus Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Exibe a temperatura em graus Fahrenheit
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}