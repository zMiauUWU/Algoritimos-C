#include <stdio.h>

int main() {
    float nota1, nota2, nota3, mediaFinal;

    // Solicita a entrada do usuário para as notas das três provas
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    // Calcula a média ponderada
    mediaFinal = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

    // Exibe a média final
    printf("A media final do aluno eh: %.2f\n", mediaFinal);

    return 0;
} 