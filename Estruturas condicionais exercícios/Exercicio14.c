#include <stdio.h>

int main() {
    int tipoCombustivel;
    float litrosAbastecidos, precoLitro, valorAPagar;

    
    printf("Digite o numero de litros abastecidos: ");
    scanf("%f", &litrosAbastecidos);

    
    printf("Digite o tipo de combustivel (1 para alcool, 2 para gasolina): ");
    scanf("%d", &tipoCombustivel);

    
    printf("Digite o preco do litro do combustivel: ");
    scanf("%f", &precoLitro);

    
    if (tipoCombustivel == 1) {  
        if (litrosAbastecidos <= 20) {
            valorAPagar = litrosAbastecidos * precoLitro * 0.97; 
        } else {
            valorAPagar = litrosAbastecidos * precoLitro * 0.95; 
        }
    } else if (tipoCombustivel == 2) {  
        if (litrosAbastecidos <= 20) {
            valorAPagar = litrosAbastecidos * precoLitro * 0.965; 
        } else {
            valorAPagar = litrosAbastecidos * precoLitro * 0.94; 
        }
    } else {
        printf("Tipo de combustivel invalido. Use 1 para alcool e 2 para gasolina.\n");
        return 1; 
    }

    
    printf("O valor a ser pago pelo cliente eh: R$ %.2f\n", valorAPagar);

    return 0;
}
