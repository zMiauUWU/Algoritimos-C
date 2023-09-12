#include <stdio.h>

int main() {
    int senhaCorreta = 2009;
    int senha;
    int tentativas = 0;

    while (1) { 
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == senhaCorreta) {
            printf("ACESSO PERMITIDO\n");
            printf("Numero de tentativas: %d\n", tentativas);
            break; 
        } else {
            printf("ACESSO NEGADO\n");
        }
    }

    return 0;
}
