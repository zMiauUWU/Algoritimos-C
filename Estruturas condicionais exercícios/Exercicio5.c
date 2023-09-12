#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número está compreendido entre 20 e 90 (inclusive)
    if (numero >= 20 && numero <= 90) {
        printf("O numero %d esta compreendido entre 20 e 90 (inclusive).\n", numero);
    } else {
        printf("O numero %d não esta compreendido entre 20 e 90 (inclusive).\n", numero);
    }

    return 0;
}
