#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados fornecidos pelo usuário
    float valor_gasto, gorjeta, valor_total;

    // Solicitar ao usuário o valor gasto pelo cliente
    printf("Digite o valor gasto pelo cliente: R$ ");
    scanf("%f", &valor_gasto);

    // Calcular a gorjeta (10% do valor gasto)
    gorjeta = 0.10 * valor_gasto;

    // Calcular o valor total a ser pago
    valor_total = valor_gasto + gorjeta;

    // Exibir o valor da gorjeta e o valor total
    printf("Valor da gorjeta: R$ %.2f\n", gorjeta);
    printf("Valor total a ser pago: R$ %.2f\n", valor_total);

    return 0;
}
