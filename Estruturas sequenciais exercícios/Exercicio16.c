#include <stdio.h>

int main() {
    int valorSaque, cedulas100, cedulas50, cedulas20, cedulas10, cedulas5;

    // Inicializa o contador de cédulas de cada valor como zero
    cedulas100 = cedulas50 = cedulas20 = cedulas10 = cedulas5 = 0;

    // Solicita o valor do saque ao usuário
    printf("Digite o valor do saque: ");
    scanf("%d", &valorSaque);

    // Calcula a quantidade de cada cédula
    while (valorSaque > 0) {
        if (valorSaque >= 100) {
            cedulas100++;
            valorSaque -= 100;
        } else if (valorSaque >= 50) {
            cedulas50++;
            valorSaque -= 50;
        } else if (valorSaque >= 20) {
            cedulas20++;
            valorSaque -= 20;
        } else if (valorSaque >= 10) {
            cedulas10++;
            valorSaque -= 10;
        } else if (valorSaque >= 5) {
            cedulas5++;
            valorSaque -= 5;
        }
    }

    // Exibe a quantidade de cédulas de cada valor
    printf("\nQuantidade de cedulas:\n");
    printf("Cedulas de 100: %d\n", cedulas100);
    printf("Cedulas de 50: %d\n", cedulas50);
    printf("Cedulas de 20: %d\n", cedulas20);
    printf("Cedulas de 10: %d\n", cedulas10);
    printf("Cedulas de 5: %d\n", cedulas5);

    return 0;
}
