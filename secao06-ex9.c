#include <stdio.h>
#include <locale.h>

int main(){
	float polu;

	printf("Informe o índice de poluição: ");
	scanf("%f", &polu);

	if(polu < 0.3){
			printf("O nível de poluição está aceitável");
		}
	else if(polu >= 0.3 && polu < 0.4){
		printf("Indústrias do 1º grupo deve suspender atividades");
	}
	else if(polu >= 0.4 && polu < 0.5){
		printf("Indústrias do 1º e 2º grupo devem suspender atividades");
	}
	else if(polu >= 0.5){
		printf("Todas as indústrias devem suspender as atividades");
	}

	return(0);
}
