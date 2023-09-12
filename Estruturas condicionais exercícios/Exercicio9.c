#include <stdio.h>

int main() {
    int idade;

    // Solicita ao usuário que insira a idade
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Verifica a idade e classifica
    if (idade < 18) {
        printf("Menor de idade.\n");
    } else if (idade >= 65) {
        printf("Terceira idade.\n");
    } else {
        printf("Maior de idade.\n");
    }

    return 0;
}
