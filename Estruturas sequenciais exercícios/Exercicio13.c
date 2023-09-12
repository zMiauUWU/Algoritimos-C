#include <stdio.h>

int main() {
    float alturaPessoa, sombraPessoa, sombraPredio, alturaPredio;

    // Solicita a entrada da altura da pessoa, sombra da pessoa e sombra do prédio
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &alturaPessoa);

    printf("Digite o comprimento da sombra da pessoa (em metros): ");
    scanf("%f", &sombraPessoa);

    printf("Digite o comprimento da sombra do predio (em metros): ");
    scanf("%f", &sombraPredio);

    // Calcula a altura do prédio usando a semelhança de triângulos
    alturaPredio = (alturaPessoa * sombraPredio) / sombraPessoa;

    // Exibe a altura estimada do prédio
    printf("\nA altura estimada do predio eh: %.2f metros\n", alturaPredio);

    return 0;
}
