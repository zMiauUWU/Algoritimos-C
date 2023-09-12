#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira o número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula o valor absoluto do número
    int valorAbsoluto = (numero < 0) ? -numero : numero;

    // Exibe o valor absoluto na tela
    printf("O valor absoluto do numero eh: %d\n", valorAbsoluto);

    return 0;
}
