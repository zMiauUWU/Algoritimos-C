#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    int valorAbsoluto = (numero < 0) ? -numero : numero;

    
    printf("O valor absoluto do numero eh: %d\n", valorAbsoluto);

    return 0;
}
