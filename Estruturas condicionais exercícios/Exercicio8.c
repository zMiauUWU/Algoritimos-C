#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("O numero %d eh positivo e par.\n", numero);
        } else {
            printf("O numero %d eh positivo e impar.\n", numero);
        }
    } else if (numero < 0) {
       
        int valorAbsoluto = -numero;
        printf("O valor absoluto de %d eh %d.\n", numero, valorAbsoluto);
    } else {
        printf("O numero eh zero.\n");
    }

    return 0;
}
