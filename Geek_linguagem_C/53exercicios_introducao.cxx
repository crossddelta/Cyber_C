#include <stdio.h>

int opt = -1;

int main()
{
do{
		
	printf("\n\nEste programa contem os 53 exercicios disponiveis sobre Introducao a linguagem C.\n\n");
	printf("Para visualizar os exercicios, digite abaixo o numero correspondente a ele, lembrando que as opcoes vao de 1 ate 53.\n\nDigite 0(zero) para sair do programa.\n\nNumero do exercicio: ");
	scanf("%d", &opt);
	
	switch(opt){
		case 1 : {
			int num;
			
			printf("\n\nExercicio 1:");
			
			printf("\n\nInforme um valor: ");
			scanf("%d", &num);
			
			printf("\nO numero informado e: %i", num);
			break;
			}
		case 2 : {
			float num;
			
			printf("\n\nExercicio 2:");
			
			printf("\n\nInforme um numero real: ");
			scanf("%f", &num);
			
			printf("\nO numero informado e: %.1f", num);
			break;
		}
		case 3 : {
			int num, soma = 0;
			
			printf("\nInforme 3 valores para visualizar a sua soma.\n");
			for(int i = 0; i < 3; i++){
				printf("\nInforme o %i/3 valor: ", i+1);
				fflush(stdin);
				scanf("%d", &num);
				
				soma = soma + num;
			}
			printf("\nA soma dos valores informados e: %d", soma);
			
			break;
			}	
		case 4 : {
			float num, quad;
			
			printf("\nInforme um numero real para ver o seu quadrado: ");
			fflush(stdin);
			scanf("%f", &num);
			
			quad = num * num;
			
			printf("O quadrado de %.1f e: %.1f", num, quad);
			break;
		}
	}
}
	while(opt != 0);
	return(0);
}