#include <stdio.h>

int main() {
    int numero1, numero2, temp;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    temp = numero1;
    numero1 = numero2;
    numero2 = temp;

    printf("\nValores trocados:\n");
    printf("Primeiro numero: %d\n", numero1);
    printf("Segundo numero: %d\n", numero2);

    return 0;
}
