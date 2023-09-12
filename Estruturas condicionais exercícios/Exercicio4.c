#include <stdio.h>

int main() {
    char genero;
    float altura, pesoIdeal;

    // Solicita ao usuário que insira o gênero (M ou F)
    printf("Digite o genero (M para masculino ou F para feminino): ");
    scanf(" %c", &genero); // O espaço antes do %c evita problemas com o caractere de quebra de linha anterior.

    // Solicita ao usuário que insira a altura em metros
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    // Calcula o peso ideal com base no gênero
    if (genero == 'M' || genero == 'm') {
        pesoIdeal = 72.7 * altura - 58;
    } else if (genero == 'F' || genero == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        printf("Genero invilido. Use 'M' para masculino ou 'F' para feminino.\n");
        return 1; // Encerra o programa com código de erro.
    }

    // Exibe o peso ideal na tela
    printf("O peso ideal eh: %.2f kg\n", pesoIdeal);

    return 0;
}
