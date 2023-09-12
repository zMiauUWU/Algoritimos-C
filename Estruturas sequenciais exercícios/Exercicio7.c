#include <stdio.h>

int main() {
    float capacidadeTanque, litrosAbastecidos, quilometragemPercorrida;
    float consumoMedio, autonomia;

    // Solicita a entrada do usuário para a capacidade do tanque, litros abastecidos e quilometragem percorrida
    printf("Digite a capacidade do tanque (em litros): ");
    scanf("%f", &capacidadeTanque);

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litrosAbastecidos);

    printf("Digite a quilometragem percorrida desde o ultimo abastecimento: ");
    scanf("%f", &quilometragemPercorrida);

    // Calcula o consumo médio
    consumoMedio = quilometragemPercorrida / litrosAbastecidos;

    // Calcula a autonomia restante
    autonomia = (capacidadeTanque - litrosAbastecidos) * consumoMedio;

    // Exibe o consumo médio e a autonomia
    printf("O consumo medio do veiculo eh: %.2f km/l\n", consumoMedio);
    printf("A autonomia restante antes do proximo abastecimento eh: %.2f km\n", autonomia);

    return 0;
}
