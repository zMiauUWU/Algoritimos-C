#include <stdio.h>

int main() {
    float capacidadeTanque, litrosAbastecidos, quilometragemPercorrida;
    float consumoMedio, autonomia;

    printf("Digite a capacidade do tanque (em litros): ");
    scanf("%f", &capacidadeTanque);

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litrosAbastecidos);

    printf("Digite a quilometragem percorrida desde o ultimo abastecimento: ");
    scanf("%f", &quilometragemPercorrida);

    consumoMedio = quilometragemPercorrida / litrosAbastecidos;

    autonomia = (capacidadeTanque - litrosAbastecidos) * consumoMedio;

    printf("O consumo medio do veiculo eh: %.2f km/l\n", consumoMedio);
    printf("A autonomia restante antes do proximo abastecimento eh: %.2f km\n", autonomia);

    return 0;
}
