#include <stdio.h>

int main() {
    int num1, num2;
    char operador;
    double resultado;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); 

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    
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

            if (num2 != 0) {
                resultado = (double) num1 / num2;
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
                return 1; 
            }
            break;
        default:
            printf("Operador invalido.\n");
            return 1; 
    }

    
    printf("Resultado: %d %c %d = %.2lf\n", num1, operador, num2, resultado);

    return 0;
}
