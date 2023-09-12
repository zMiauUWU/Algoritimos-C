#include <stdio.h>

int main() {
    int n = 10;
    int primeiro = 1, segundo = 1, proximo;

    printf("Os primeiros %d numeros da sequencia de Fibonacci:\n", n);

    printf("%d, %d, ", primeiro, segundo);

    for (int i = 2; i < n; i++) {
        proximo = primeiro + segundo;
        printf("%d, ", proximo);

        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}
