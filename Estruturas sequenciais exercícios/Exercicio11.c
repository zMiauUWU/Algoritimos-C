#include <stdio.h>

int main() {
    int votosBrancos, votosNulos, votosValidos, totalEleitores;
    float percentualBrancos, percentualNulos, percentualValidos;

    // Solicita a entrada do número de votos brancos, nulos e válidos
    printf("Digite o numero de votos brancos: ");
    scanf("%d", &votosBrancos);

    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Digite o numero de votos validos: ");
    scanf("%d", &votosValidos);

    // Solicita a entrada do total de eleitores
    printf("Digite o total de eleitores: ");
    scanf("%d", &totalEleitores);

    // Calcula os percentuais
    percentualBrancos = (float)votosBrancos / totalEleitores * 100;
    percentualNulos = (float)votosNulos / totalEleitores * 100;
    percentualValidos = (float)votosValidos / totalEleitores * 100;

    // Exibe os resultados
    printf("\nResultados:\n");
    printf("Percentual de votos brancos: %.2f%%\n", percentualBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentualNulos);
    printf("Percentual de votos validos: %.2f%%\n", percentualValidos);

    return 0;
}
