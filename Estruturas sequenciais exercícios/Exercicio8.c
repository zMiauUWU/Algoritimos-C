#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados fornecidos pelo usuário
    float km_percorridos, valor_dia, valor_km, total_pagar;
    int dias_alugados;

    // Solicitar ao usuário a quantidade de km percorridos e dias alugados
    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &km_percorridos);

    printf("Digite a quantidade de dias alugados: ");
    scanf("%d", &dias_alugados);

    // Definir os valores das taxas
    valor_dia = 70.0;  // R$ 70,00 por dia
    valor_km = 0.15;   // R$ 0,15 por km rodado

    // Calcular o valor a pagar
    total_pagar = (valor_dia * dias_alugados) + (valor_km * km_percorridos);

    // Exibir o valor a pagar
    printf("O valor a pagar pelo aluguel do carro e: R$ %.2f\n", total_pagar);

    return 0;
}
