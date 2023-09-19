#include <stdio.h>

int main() {
    int horas, minutos, segundos, tempoTotalSegundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    tempoTotalSegundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("O tempo total em segundos eh: %d segundos\n", tempoTotalSegundos);

    return 0;
}