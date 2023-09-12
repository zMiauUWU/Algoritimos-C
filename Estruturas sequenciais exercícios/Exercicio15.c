#include <stdio.h>

int main() {
    int latas, garrafas600ml, garrafas2litros;
    float totalLitros;

    // Solicita a quantidade de cada formato de refrigerante comprado
    printf("Digite a quantidade de latas de 350 ml: ");
    scanf("%d", &latas);

    printf("Digite a quantidade de garrafas de 600 ml: ");
    scanf("%d", &garrafas600ml);

    printf("Digite a quantidade de garrafas de 2 litros: ");
    scanf("%d", &garrafas2litros);

    // Calcula o total de litros de refrigerante comprado
    totalLitros = (latas * 0.35) + (garrafas600ml * 0.6) + (garrafas2litros * 2);

    // Exibe o total de litros
    printf("\nTotal de litros de refrigerante comprados: %.2f litros\n", totalLitros);

    return 0;
}
