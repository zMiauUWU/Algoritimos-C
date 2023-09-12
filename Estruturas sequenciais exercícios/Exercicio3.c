#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    // Solicita a entrada do usuário para um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula o antecessor e o sucessor do número
    antecessor = numero - 1;
    sucessor = numero + 1;

    // Exibe o antecessor e o sucessor
    printf("O antecessor de %d eh %d\n", numero, antecessor);
    printf("O sucessor de %d eh %d\n", numero, sucessor);

    return 0;
}