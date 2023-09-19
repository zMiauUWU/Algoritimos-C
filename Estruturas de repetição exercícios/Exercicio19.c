#include <stdio.h>

int main() {
    int escolha;
    int numerosPares = 0;
    int numerosImpares = 0;
    int numero;

    do {
        printf("# MENU PRINCIPAL #\n");
        printf("[1] Digitar um numero par\n");
        printf("[2] Digitar um numero impar\n");
        printf("[3] Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite um numero par: ");
                scanf("%d", &numero);
                if (numero % 2 == 0) {
                    numerosPares++;
                } else {
                    printf("Este nao eh um numero par.\n");
                }
                break;
            case 2:
                printf("Digite um numero impar: ");
                scanf("%d", &numero);
                if (numero % 2 != 0) {
                    numerosImpares++;
                } else {
                    printf("Este nao eh um numero ímpar.\n");
                }
                break;
            case 3:
                printf("Quantidade de numeros pares digitados: %d\n", numerosPares);
                printf("Quantidade de numeros ímpares digitados: %d\n", numerosImpares);
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("opcao invalida. Tente novamente.\n");
                break;
        }

    } while (escolha != 3);

    return 0;
}
