#include <stdio.h>

int main() {
    float kgMorangos, kgMacas, precoMorangos, precoMacas, valorTotal;

    
    printf("Digite a quantidade de morangos (em kg): ");
    scanf("%f", &kgMorangos);

    printf("Digite a quantidade de massans (em kg): ");
    scanf("%f", &kgMacas);

    
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

    
    valorTotal = precoMorangos + precoMacas;

    
    if (kgMorangos + kgMacas > 10 || valorTotal > 50.00) {
        valorTotal *= 0.90; 
    }

    
    printf("O valor a ser pago pelo cliente eh: R$ %.2f\n", valorTotal);

    return 0;
}
