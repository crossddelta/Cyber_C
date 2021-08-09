#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor, maior=0;

	printf("Digite 0 para encerrar a operação.\n\nPor favor informe um valor: ");
	scanf("%d", &valor);
	while(valor != 0){
		if(valor > maior)
			maior = valor;
				printf("Digite mais um valor: ");
				scanf("%d", &valor);
	}
	printf("O maior valor digitado foi %d", maior);

	return(0);
}
