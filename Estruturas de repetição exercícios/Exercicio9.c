#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    printf("Tabela de conversao de temperatura (Celsius para Fahrenheit):\n");
    printf("Celsius\t\tFahrenheit\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d\t\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
