#include <stdio.h>

int main() {
    double resultado = 0.0;
    double numerador = 1.0;
    double denominador = 1.0;

    printf("Calculando a serie: 1/1 + 3/2 + 5/4 + 7/8 + ...\n");

    for (int i = 1; i <= 20; i++) {
        resultado += numerador / denominador;
        numerador += 2.0; 
        denominador *= 2.0; 
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
