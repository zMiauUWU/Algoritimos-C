#include <stdio.h>

int main() {
    double numero;
    double maximo = 0.0;
    double minimo = 0.0;
    int primeiro = 1;

    printf("Digite uma sequencia de numeros reais positivos (termine com 0):\n");

    do {
        scanf("%lf", &numero);

        if (numero != 0.0) {
            if (primeiro) {
                maximo = numero;
                minimo = numero;
                primeiro = 0;
            } else {
                if (numero > maximo) {
                    maximo = numero;
                } else if (numero < minimo) {
                    minimo = numero;
                }
            }
        }
    } while (numero != 0.0);

    if (!primeiro) {
        double amplitude = maximo - minimo;
        printf("A amplitude estatistica dos valores eh: %.2lf\n", amplitude);
    } else {
        printf("Nenhum numero valido foi inserido.\n");
    }

    return 0;
}
