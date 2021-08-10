#include <stdio.h>

int main(){
	int vetor[10];

	for(int i = 0; i < 10; i++){
		printf("Informe o valor da posição %d/10 para o vetor: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	for(int i = 9; i > -1; i--){
		printf("%d\n", vetor[i]);
	}

	return(0);
}
