#include <stdio.h>

int main() {
    int horas, minutos, segundos, tempoTotalSegundos;

    // Solicita a entrada do usuário para as horas, minutos e segundos
    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    // Calcula o tempo total em segundos
    tempoTotalSegundos = (horas * 3600) + (minutos * 60) + segundos;

    // Exibe o resultado
    printf("O tempo total em segundos eh: %d segundos\n", tempoTotalSegundos);

    return 0;
}