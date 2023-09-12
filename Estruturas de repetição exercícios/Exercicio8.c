#include <stdio.h>

int main() {
    int numero, inicio, fim;

    printf("Mostrar a tabuada de: ");
    scanf("%d", &numero);

    printf("Comecar por: ");
    scanf("%d", &inicio);

    printf("Terminar em: ");
    scanf("%d", &fim);

    printf("Tabuada do %d de %d ateh %d:\n", numero, inicio, fim);

    if (inicio <= fim) {
        for (int i = inicio; i <= fim; i++) {
            int resultado = numero * i;
            printf("%d x %d = %d\n", numero, i, resultado);
        }
    } else {
        printf("O valor de inicio deve ser menor ou igual ao valor de termino.\n");
    }

    return 0;
}
