#include <stdio.h>

int main() {

    float valor_vendas_mes;
    int num_sapatos_vendidos;
    float comissao, salario;

    printf("Digite o valor total das vendas do mes: R$ ");
    scanf("%f", &valor_vendas_mes);

    printf("Digite o numero de pares de sapatos vendidos: ");
    scanf("%d", &num_sapatos_vendidos);

    comissao = 0.20 * valor_vendas_mes;
    float pagamento_por_sapato = 5.0 * num_sapatos_vendidos;

    salario = comissao + pagamento_por_sapato;

    printf("O salario do vendedor neste mes eh: R$ %.2f\n", salario);

    return 0;
}
