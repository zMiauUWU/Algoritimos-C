#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é divisível por 2 e por 3
    if (numero % 2 == 0 && numero % 3 == 0) {
        printf("%d eh divisivel por 2 e por 3.\n", numero);
    } else {
        printf("%d nao eh divisivel por 2 e por 3.\n", numero);
    }

    return 0;
}