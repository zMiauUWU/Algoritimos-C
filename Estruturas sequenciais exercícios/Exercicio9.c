#include <stdio.h>

int main() {
   
    float valor_gasto, gorjeta, valor_total;

    printf("Digite o valor gasto pelo cliente: R$ ");
    scanf("%f", &valor_gasto);

    gorjeta = 0.10 * valor_gasto;

    valor_total = valor_gasto + gorjeta;

    printf("Valor da gorjeta: R$ %.2f\n", gorjeta);
    printf("Valor total a ser pago: R$ %.2f\n", valor_total);

    return 0;
}
