#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Numeros pares entre 1 e %d:\n", numero);

    for (int i = 2; i <= numero; i += 2) {
        printf("%d\n", i);
        contador++;
    }

    printf("Quantidade de numeros pares apresentados: %d\n", contador);

    return 0;
}
