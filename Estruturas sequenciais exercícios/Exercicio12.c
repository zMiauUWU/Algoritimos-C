#include <stdio.h>

int main() {
    int numero1, numero2, temp;

    // Solicita a entrada dos dois números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    // Realiza a troca de valores usando uma variável temporária (temp)
    temp = numero1;
    numero1 = numero2;
    numero2 = temp;

    // Exibe os valores trocados
    printf("\nValores trocados:\n");
    printf("Primeiro numero: %d\n", numero1);
    printf("Segundo numero: %d\n", numero2);

    return 0;
}
