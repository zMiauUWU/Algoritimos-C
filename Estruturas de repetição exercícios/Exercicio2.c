#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    
    printf("Contagem regressiva para o lancamento do foguete:\n");
    
    for (i = 10; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1);
    }
    
    printf("Fogo!\n");
    
    return 0;
}
