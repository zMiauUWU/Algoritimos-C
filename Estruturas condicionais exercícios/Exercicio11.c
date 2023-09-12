#include <stdio.h>

int main() {
    int num1, num2;
    char operador;
    double resultado;

    // Solicita ao usuário que insira os dois números e o operador
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // O espaço antes de %c é importante para evitar problemas de buffer.

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Calcula o resultado com base no operador escolhido
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Verifica divisão por zero
            if (num2 != 0) {
                resultado = (double) num1 / num2;
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Operador invalido.\n");
            return 1; // Encerra o programa com código de erro
    }

    // Exibe o resultado
    printf("Resultado: %d %c %d = %.2lf\n", num1, operador, num2, resultado);

    return 0;
}
