#include <stdio.h>

int main() {
    int num1, num2, num3, menor;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    
    menor = num1;

    
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    
    printf("O menor valor eh: %d\n", menor);

    return 0;
}