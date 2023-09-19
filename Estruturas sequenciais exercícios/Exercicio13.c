#include <stdio.h>

int main() {
    float alturaPessoa, sombraPessoa, sombraPredio, alturaPredio;

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &alturaPessoa);

    printf("Digite o comprimento da sombra da pessoa (em metros): ");
    scanf("%f", &sombraPessoa);

    printf("Digite o comprimento da sombra do predio (em metros): ");
    scanf("%f", &sombraPredio);

    alturaPredio = (alturaPessoa * sombraPredio) / sombraPessoa;

    printf("\nA altura estimada do predio eh: %.2f metros\n", alturaPredio);

    return 0;
}
