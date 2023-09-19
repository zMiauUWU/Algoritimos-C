#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 0;

    printf("Calculando quantos numeros em sequencia somam mais de 100:\n");

    while (soma <= 100) {
        contador++;
        soma += contador;
    }

    printf("Soma dos %d primeiros numeros em sequencia: %d\n", contador, soma);

    return 0;
}
