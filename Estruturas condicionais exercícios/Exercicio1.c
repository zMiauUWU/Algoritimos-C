#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numero1, numero2, soma;

    // Solicita a entrada dos números
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Calcula a soma dos números
    soma = numero1 + numero2;

    // Verifica a condição e apresenta o resultado
    if (soma < 20) {
        soma += 8;
    } else {
        soma -= 5;
    }

    printf("O resultado eh: %d\n", soma);

    return 0;
}
