#include <stdio.h>

int main() {
    int i;
    int termo = 1;

    printf("Os 10 primeiros termos da serie sao:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", termo);
        termo *= 3;
    }

    printf("\n");

    return 0;
}
