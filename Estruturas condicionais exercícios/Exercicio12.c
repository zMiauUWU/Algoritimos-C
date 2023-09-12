#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro de 0 a 9
    printf("Digite um numero inteiro de 0 a 9: ");
    scanf("%d", &numero);

    // Converte o número para extenso
    switch (numero) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Três\n");
            break;
        case 4:
            printf("Quatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        case 6:
            printf("Seis\n");
            break;
        case 7:
            printf("Sete\n");
            break;
        case 8:
            printf("Oito\n");
            break;
        case 9:
            printf("Nove\n");
            break;
        default:
            printf("Valor invalido\n");
            break;
    }

    return 0;
}
