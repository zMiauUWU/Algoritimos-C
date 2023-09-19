#include <stdio.h>

int main() {
    float salarioMinimo, quilowattsGastos, valorPorQuilowatt, valorTotal;

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite a quantidade de quilowatts gastos: ");
    scanf("%f", &quilowattsGastos);

    valorPorQuilowatt = salarioMinimo / 7 / 100; 

    valorTotal = quilowattsGastos * valorPorQuilowatt;

    printf("\nValor em reais de cada quilowatt: R$ %.2f\n", valorPorQuilowatt);
    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);

    return 0;
}
