#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados fornecidos pelo usuário
    float valor_vendas_mes;
    int num_sapatos_vendidos;
    float comissao, salario;

    // Solicitar ao usuário o valor total das vendas do mês
    printf("Digite o valor total das vendas do mes: R$ ");
    scanf("%f", &valor_vendas_mes);

    // Solicitar ao usuário o número de pares de sapatos vendidos
    printf("Digite o numero de pares de sapatos vendidos: ");
    scanf("%d", &num_sapatos_vendidos);

    // Calcular a comissão (20% das vendas) e o pagamento por sapato (R$ 5,00 por par)
    comissao = 0.20 * valor_vendas_mes;
    float pagamento_por_sapato = 5.0 * num_sapatos_vendidos;

    // Calcular o salário total do vendedor
    salario = comissao + pagamento_por_sapato;

    // Exibir o salário do vendedor
    printf("O salario do vendedor neste mes eh: R$ %.2f\n", salario);

    return 0;
}
