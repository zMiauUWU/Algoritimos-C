#include <stdio.h>

int main() {
   
    int numero1, numero2, temp;

    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    
    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    
    printf("Os numeros em ordem crescente sao: %d e %d\n", numero1, numero2);

    return 0;
}
