#include <stdio.h>

int opt;

int main()
{
	printf("Este programa contem os 53 exercicios disponiveis sobre Introducao a linguagem C.\n\n");
	printf("Para visualizar os exercicios, digite abaixo o seu numero correspondente, lembrando que as opcoes vao de 1 ate 53.\n\nNumero do exercicio: ");
	scanf("%d", &opt);
	
	switch(opt){
		case 1 : {
			int num;
			
			printf("Exercicio 1:\n\n");
			
			printf("Informe um valor: ");
			scanf("%d", &num);
			
			printf("O numero informado e: %i", num);
			}
	}
	return(0);
}