#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0 || numero % 7 == 0) {
        printf("%d eh divisivel por 2 ou por 7.\n", numero);
    } else {
        printf("%d não eh divisivel por 2 nem por 7.\n", numero);
    }

    return 0;
}
