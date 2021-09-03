/*Aula sobre Switch*/

#include <stdio.h>

int escolha;

int main()
{
	printf("Escolha um valor de 1 a 4: ");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1 : printf("Opcao 1"); break;
		case 2 : printf("Opcao 2"); break;
		case 3 : printf("Opcao 3"); break;
		case 4 : printf("Opcao 4"); break;
	}
	
	return(0);
}