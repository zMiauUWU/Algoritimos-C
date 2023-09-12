#include <stdio.h>

int main() {
    int num1, num2, num3, menor;

    // Solicita ao usuário que insira três números inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    // Assume que o primeiro número é o menor inicialmente
    menor = num1;

    // Compara com os outros números para encontrar o menor
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // Exibe o menor valor
    printf("O menor valor eh: %d\n", menor);

    return 0;
}