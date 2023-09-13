/*
	atividade 1 de algoritmos (1.0)
	
	imagine que a disciplina de algoritmos possui estudantes do curso de BSI e do curso de ADS
	o professor precisa lancar as notas de todos os estudantes, mas gerar estatisticas separadas para cada curso
	se o estudante tirar mais que 7.0 ele eh aprovado, se tirar menos que 3.0 ele eh reprovado, caso contrario fica de final
	implemente um programa em que o usuario possa inserir uma quantidade qualquer de notas
	o programa deve comecar exibindo uma mensagem de boas-vindas e explicando o que o usuario deve fazer
	ao inserir cada nota o usuario devera informar tambem o curso do estudante
	nao eh permitido inserir primeiro os de um curso e depois do outro, as notas devem poder ser inseridas em qualquer ordem
	apos todas as notas terem sido inseridas, o programa deve informar:
		- qual a media geral de cada curso
		- quantos estudantes de cada curso foram reprovados
		- quantos estudantes de cada curso ficaram de final
		- quantos estudantes de cada curso foram aprovados
		- qual o percentual total de alunos aprovados
		- qual curso teve mais notas acima de 9.0
		- quantos estudantes tiraram zero
	por fim o programa deve perguntar se o usuario quer repetir o processo, caso sim voltar ao inicio, caso nao deve se despedir e encerrar
*/
// rafael,ana caroline, isabela
#include <stdio.h>
#include <stdlib.h>

int main(){

	int  escolha =0;
	int curso_ads =0;
	int curso_bsi =0;
	int aprovados_ads =0;
	int reprovados_ads =0;
	int aprovados_bsi =0;
	int reprovados_bsi =0;
	int substitutiva_ads =0;
	int substitutiva_bsi =0;
	int total_de_alunos_aprovados =0;
	int curso_com_mais_nota =0;
	int estudantes_com_0 =0;
	int total_de_alunos =0;

	
	


	float nota_ads =0, nota_bsi =0, mediafinal =0,total_aprovados =0;


	printf("Boas vindas ao lancamento de notas\n");
	printf("selecione qual curso deseja\n");
	
	do{	
        printf("[1] Digitar para curso ads\n");
        printf("[2] Digitar para curso bsi\n");
        printf("[3] Relatorios\n");
		scanf("%d", &escolha);
	
		switch (escolha) {
            case 1:
                
                printf("Digite a nota: \n");
				scanf("%f", &nota_ads);
			
			
				if (nota_ads >= 7.0) {
            	aprovados_ads++;
				}
        
				else if (nota_ads <= 3.0) {
                reprovados_ads++;
				}	
				
				else{
				substitutiva_ads++;
			   	}
			   
			   break;

			
            case 2:
        
                printf("Digite a nota: \n");
				scanf("%f", &nota_bsi);
				
		
				if (nota_bsi >= 7.0) {
            	aprovados_bsi++;
				}
        
				else if (nota_bsi <= 3.0) {
                 reprovados_bsi++;
				}

				else{
					substitutiva_bsi++;
				}
                break;


            case 3:
                printf("Relatorios\n");
               
                break;

					
		   	default:
                printf("opcao invalida. Tente novamente.\n");
                break;
		}
	
	 } while (escolha != 3);

		total_de_alunos_aprovados = aprovados_ads + aprovados_bsi;
		total_de_alunos = aprovados_ads + aprovados_bsi + reprovados_ads + reprovados_bsi + substitutiva_ads + substitutiva_bsi;
		total_aprovados = total_de_alunos_aprovados / (float)total_de_alunos * 100.0;

		printf("Total de Alunos aprovados BSI: %d \n",aprovados_bsi);
		printf("Total de Alunos reprovados BSI: %d \n",reprovados_bsi);
		printf("Total de alunos substitutiva BSI:%d\n",substitutiva_bsi);
		printf("Total de Alunos aprovados ADS: %d \n",aprovados_ads);
		printf("Total de alunos reprovados ADS: %d \n",reprovados_ads);
		printf("Total de alunos substitutiva ADS: %d \n",substitutiva_ads);
		printf("O percentual de alunos aprovados: %.2f \n",total_aprovados);

	
	return 0;
}
