#include <stdio.h>

int main() {
    int valorSaque, cedulas100, cedulas50, cedulas20, cedulas10, cedulas5;

    cedulas100 = cedulas50 = cedulas20 = cedulas10 = cedulas5 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &valorSaque);

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

    printf("\nQuantidade de cedulas:\n");
    printf("Cedulas de 100: %d\n", cedulas100);
    printf("Cedulas de 50: %d\n", cedulas50);
    printf("Cedulas de 20: %d\n", cedulas20);
    printf("Cedulas de 10: %d\n", cedulas10);
    printf("Cedulas de 5: %d\n", cedulas5);

    return 0;
}
