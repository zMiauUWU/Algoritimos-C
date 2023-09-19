#include <stdio.h>

int main() {
    int numCopias;
    float valorTotal;


    printf("Digite o numero total de copias: ");
    scanf("%d", &numCopias);

    
    if (numCopias <= 100) {
        valorTotal = numCopias * 0.25;
    } else {
        
        valorTotal = 100 * 0.25 + (numCopias - 100) * 0.20;
    }

    
    printf("O valor a ser pago eh: R$ %.2f\n", valorTotal);

    return 0;
}