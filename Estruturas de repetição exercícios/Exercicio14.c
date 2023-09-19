#include <stdio.h>

int main() {
    double resultado = 0.0;
    double numerador = 1000.0;
    double denominador = 1.0;
    int sinal = 1;

    printf("Calculando a serie: 1000/1 - 997/2 + 994/3 - 991/4 + ...\n");

    for (int i = 1; i <= 50; i++) {
        resultado += sinal * (numerador / denominador);
        sinal *= -1; 
        numerador -= 3.0;
        denominador += 1.0;
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
