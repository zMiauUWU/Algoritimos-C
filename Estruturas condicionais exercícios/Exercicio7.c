#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é divisível por 2 ou por 7
    if (numero % 2 == 0 || numero % 7 == 0) {
        printf("%d eh divisivel por 2 ou por 7.\n", numero);
    } else {
        printf("%d não eh divisivel por 2 nem por 7.\n", numero);
    }

    return 0;
}
