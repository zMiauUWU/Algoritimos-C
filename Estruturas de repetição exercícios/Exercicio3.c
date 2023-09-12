#include <stdio.h>

int main() {
    int i;
    
    printf("Numeros multiplos de 5 no intervalo de 1 ateh 100:\n");
    
    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
