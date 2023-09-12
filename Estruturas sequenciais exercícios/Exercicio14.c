#include <stdio.h>

int main() {
    float salarioMinimo, quilowattsGastos, valorPorQuilowatt, valorTotal;

    // Solicita a entrada do valor do salário mínimo e dos quilowatts gastos
    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite a quantidade de quilowatts gastos: ");
    scanf("%f", &quilowattsGastos);

    // Calcula o valor em reais de cada quilowatt
    valorPorQuilowatt = salarioMinimo / 7 / 100; // Um sétimo do salário mínimo

    // Calcula o valor total a ser pago
    valorTotal = quilowattsGastos * valorPorQuilowatt;

    // Exibe os resultados
    printf("\nValor em reais de cada quilowatt: R$ %.2f\n", valorPorQuilowatt);
    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);

    return 0;
}
