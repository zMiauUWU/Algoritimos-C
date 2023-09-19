#include <stdio.h>

int main() {
    double resultado = 0.0;

    printf("Calculando a serie: 1/100 + 2/99 + 3/98 + ... + 100/1\n");

    for (int i = 1; i <= 100; i++) {
        resultado += (double)i / (101 - i);
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
