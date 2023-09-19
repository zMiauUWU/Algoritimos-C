#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite numeros para somar (digite 0 para encerrar):\n");

    do {
        scanf("%d", &numero);
        soma += numero;
    } while (numero != 0);

    printf("A soma dos numeros fornecidos eh: %d\n", soma);

    return 0;
}
