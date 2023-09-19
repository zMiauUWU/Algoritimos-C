#include <stdio.h>

int main() {
    int numero;

   
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0 && numero % 3 == 0) {
        printf("%d eh divisivel por 2 e por 3.\n", numero);
    } else {
        printf("%d nao eh divisivel por 2 e por 3.\n", numero);
    }

    return 0;
}