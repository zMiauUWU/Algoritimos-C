#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    
    if (numero >= 20 && numero <= 90) {
        printf("O numero %d esta compreendido entre 20 e 90 (inclusive).\n", numero);
    } else {
        printf("O numero %d nao esta compreendido entre 20 e 90 (inclusive).\n", numero);
    }

    return 0;
}
