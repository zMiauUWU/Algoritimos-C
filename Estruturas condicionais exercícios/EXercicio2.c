#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numero1, numero2, temp;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    // Verifica se o primeiro número é maior que o segundo e, se for, troca os valores
    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    // Exibe os números em ordem crescente
    printf("Os numeros em ordem crescente sao: %d e %d\n", numero1, numero2);

    return 0;
}
