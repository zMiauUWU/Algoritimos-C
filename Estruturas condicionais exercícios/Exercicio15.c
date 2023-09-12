#include <stdio.h>

int main() {
    float kgMorangos, kgMacas, precoMorangos, precoMacas, valorTotal;

    // Solicita ao usuário que insira a quantidade de morangos e maçãs adquiridas em kg
    printf("Digite a quantidade de morangos (em kg): ");
    scanf("%f", &kgMorangos);

    printf("Digite a quantidade de massans (em kg): ");
    scanf("%f", &kgMacas);

    // Calcula o preço dos morangos e maçãs com base na tabela de preços
    if (kgMorangos <= 5) {
        precoMorangos = kgMorangos * 6.50;
    } else {
        precoMorangos = kgMorangos * 6.20;
    }

    if (kgMacas <= 5) {
        precoMacas = kgMacas * 3.80;
    } else {
        precoMacas = kgMacas * 3.50;
    }

    // Calcula o valor total da compra
    valorTotal = precoMorangos + precoMacas;

    // Aplica o desconto de 10% se a compra for maior que 10 kg ou o valor total for maior que R$ 50,00
    if (kgMorangos + kgMacas > 10 || valorTotal > 50.00) {
        valorTotal *= 0.90; // Aplica o desconto de 10%
    }

    // Exibe o valor a ser pago pelo cliente
    printf("O valor a ser pago pelo cliente eh: R$ %.2f\n", valorTotal);

    return 0;
}
