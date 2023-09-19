#include <stdio.h>

int main() {
    char genero;
    float altura, pesoIdeal;

    
    printf("Digite o genero (M para masculino ou F para feminino): ");
    scanf(" %c", &genero); 
    
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    
    if (genero == 'M' || genero == 'm') {
        pesoIdeal = 72.7 * altura - 58;
    } else if (genero == 'F' || genero == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        printf("Genero invilido. Use 'M' para masculino ou 'F' para feminino.\n");
        return 1; 
    }

    
    printf("O peso ideal eh: %.2f kg\n", pesoIdeal);

    return 0;
}
