#include <stdio.h>

int main() {
    int numCopias;
    float valorTotal;

    // Solicita ao usuário que insira o número total de cópias
    printf("Digite o numero total de copias: ");
    scanf("%d", &numCopias);

    // Calcula o valor a ser pago
    if (numCopias <= 100) {
        valorTotal = numCopias * 0.25;
    } else {
        // Se o número de cópias for maior que 100, calcula o valor com desconto
        valorTotal = 100 * 0.25 + (numCopias - 100) * 0.20;
    }

    // Exibe o valor total a ser pago
    printf("O valor a ser pago eh: R$ %.2f\n", valorTotal);

    return 0;
}