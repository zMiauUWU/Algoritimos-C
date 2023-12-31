#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    printf("Bem vindo!\n");

    while(1)
    {
        int numAlunosADS = 0;
        int numAlunosBSI = 0;
        int aprovadosADS = 0;
        int aprovadosBSI = 0;
        int reprovadosADS = 0;
        int reprovadosBSI = 0;
        int finalADS = 0;
        int finalBSI = 0;
        int maisQueNoveADS = 0;
        int maisQueNoveBSI = 0;
        int zero = 0;
        
        float somaDasNotasADS = 0.0;
        float somaDasNotasBSI = 0.0;
        
        while(1)
        {
            char opcao;
            printf("Escolha o curso\n  A para ADS\n  B para BSI\n  Q para encerrar\n");
            scanf(" %c", &opcao);
            
            if(opcao == 'a' || opcao == 'A')
            {
            	float nota;
            	while(1)
                {
                    printf("Digite a nota: ");
                    scanf("%f", &nota);
                    if(nota < 0 || nota > 10)
                    {
                        printf("A nota deve estar entre 0 e 10\n");
                    }
                    else
                    {
                        break;
                    }
                }
            	
                numAlunosADS++;
                somaDasNotasADS += nota;

                if(nota >= 7.0)
                {
                    aprovadosADS++;
                    if(nota >= 9.0)
                    {
                        maisQueNoveADS++;
                    }
                }
                else if(nota >= 3.0)
                {
                    finalADS++;
                }
                else
                {
                    reprovadosADS++;
                    if(nota == 0.0)
                    {
                        zero++;
                    }
                }
            }
            else if(opcao == 'b' || opcao == 'B')
            {
                float nota;
            	while(1)
                {
                    printf("Digite a nota: ");
                    scanf("%f", &nota);
                    if(nota < 0 || nota > 10)
                    {
                        printf("A nota deve estar entre 0 e 10\n");
                    }
                    else
                    {
                        break;
                    }
                }
            	
                numAlunosBSI++;
                somaDasNotasBSI += nota;

                if(nota >= 7.0)
                {
                    aprovadosBSI++;
                    if(nota >= 9.0)
                    {
                        maisQueNoveBSI++;
                    }
                }
                else if(nota >= 3.0)
                {
                    finalBSI++;
                }
                else
                {
                    reprovadosBSI++;
                    if(nota == 0.0)
                    {
                        zero++;
                    }
                }
            }
            else if(opcao == 'q' || opcao == 'Q')
            {
                break;
            }
            else
            {
            	printf("Opcao invalida\n");
            }
        }
		
		float mediaADS = somaDasNotasADS / (float) numAlunosADS;
        float mediaBSI = somaDasNotasBSI / (float) numAlunosBSI;

        float percentualAprovados = (aprovadosADS + aprovadosBSI) / (float) (numAlunosADS + numAlunosBSI) * 100.0;
		
		printf("\n");
        printf("A media das notas de ADS eh: %.2f\n", mediaADS);
        printf("O numero de aprovados de ADS eh: %i\n", aprovadosADS);
        printf("O numero de subs de ADS eh: %i\n", finalADS);
        printf("O numero de reprovados de ADS eh: %i\n", reprovadosADS);
        printf("\n");
        printf("A media das notas de BSI eh: %.2f\n", mediaBSI);
        printf("O numero de aprovados de BSI eh: %i\n", aprovadosBSI);
        printf("O numero de subs de BSI eh: %i\n", finalBSI);
        printf("O numero de reprovados de BSI eh: %i\n", reprovadosBSI);
        printf("\n");
        printf("O percentual de aprovados eh: %.2f\n", percentualAprovados);
        printf("O numero de alun@s que zeraram eh: %i\n", zero);
        
        printf("O curso com mais notas maiores que nove eh: ");
        if(maisQueNoveADS > maisQueNoveBSI)
        {
            printf("ADS\n");
        }
        else if(maisQueNoveBSI > maisQueNoveADS)
        {
            printf("BSI\n");
        }
        else
        {
            printf("ambos\n");
        }
		
		printf("\n");
		
		printf("Gostaria inserir notas de outra turma?\n  S para sim\n  N para nao\n");
        char continuar;
        scanf(" %c", &continuar);
        if(continuar != 's' && continuar != 'S')
        {
            break;
        }
        
        system("cls");
    }
	
    return 0;
}
