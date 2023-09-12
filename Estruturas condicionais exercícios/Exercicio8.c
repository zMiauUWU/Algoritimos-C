#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("O numero %d eh positivo e par.\n", numero);
        } else {
            printf("O numero %d eh positivo e impar.\n", numero);
        }
    } else if (numero < 0) {
        // Calcula o valor absoluto do número negativo
        int valorAbsoluto = -numero;
        printf("O valor absoluto de %d eh %d.\n", numero, valorAbsoluto);
    } else {
        printf("O numero eh zero.\n");
    }

    return 0;
}
