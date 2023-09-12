#include <stdio.h>

int main() {
    int escolha;

    do {
        printf("# MENU PRINCIPAL #\n");
        printf("[1] Inserir\n");
        printf("[2] Excluir\n");
        printf("[3] Consultar\n");
        printf("[4] Listar\n");
        printf("[5] Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Voce escolheu: Inserir\n");
                
                break;
            case 2:
                printf("Voce escolheu: Excluir\n");
                
                break;
            case 3:
                printf("Voce escolheu: Consultar\n");
               
                break;
            case 4:
                printf("Voce escolheu: Listar\n");
               
                break;
            case 5:
                printf("Voce escolheu: Sair\n");
                
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }

    } while (escolha != 5);

    return 0;
}
