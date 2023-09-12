#include <stdio.h>

int main() {
    int tipoCombustivel;
    float litrosAbastecidos, precoLitro, valorAPagar;

    // Solicita ao usuário que insira o número de litros abastecidos
    printf("Digite o numero de litros abastecidos: ");
    scanf("%f", &litrosAbastecidos);

    // Solicita ao usuário que insira o tipo de combustível (1 para álcool, 2 para gasolina)
    printf("Digite o tipo de combustivel (1 para alcool, 2 para gasolina): ");
    scanf("%d", &tipoCombustivel);

    // Solicita ao usuário que insira o preço do litro do combustível
    printf("Digite o preco do litro do combustivel: ");
    scanf("%f", &precoLitro);

    // Calcula o valor a ser pago com base no tipo de combustível e no número de litros abastecidos
    if (tipoCombustivel == 1) {  // Álcool
        if (litrosAbastecidos <= 20) {
            valorAPagar = litrosAbastecidos * precoLitro * 0.97; // Desconto de 3%
        } else {
            valorAPagar = litrosAbastecidos * precoLitro * 0.95; // Desconto de 5% para mais de 20 litros
        }
    } else if (tipoCombustivel == 2) {  // Gasolina
        if (litrosAbastecidos <= 20) {
            valorAPagar = litrosAbastecidos * precoLitro * 0.965; // Desconto de 3.5%
        } else {
            valorAPagar = litrosAbastecidos * precoLitro * 0.94; // Desconto de 6% para mais de 20 litros
        }
    } else {
        printf("Tipo de combustivel invalido. Use 1 para alcool e 2 para gasolina.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Exibe o valor a ser pago pelo cliente
    printf("O valor a ser pago pelo cliente eh: R$ %.2f\n", valorAPagar);

    return 0;
}
