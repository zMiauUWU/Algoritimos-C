#include <stdio.h>

int main() {

    float km_percorridos, valor_dia, valor_km, total_pagar;
    int dias_alugados;

    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &km_percorridos);

    printf("Digite a quantidade de dias alugados: ");
    scanf("%d", &dias_alugados);

    valor_dia = 70.0;  
    valor_km = 0.15;   

    total_pagar = (valor_dia * dias_alugados) + (valor_km * km_percorridos);

    printf("O valor a pagar pelo aluguel do carro e: R$ %.2f\n", total_pagar);

    return 0;
}
