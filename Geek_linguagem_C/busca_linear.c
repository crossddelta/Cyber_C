#include <stdio.h>

int busca_linear(int *vetor, int chave, int tam){
	int i;
	
	for(i = 0; i < tam || vetor[i] > chave; i++){
		if(vetor[i] == chave){
			return i;
		}
	}
}

int main(){
	int vetor[6] = {1, 3, 5, 8, 12, 42};
	int chave = 5;
	
	int ret = busca_linear(vetor, chave, 6);
	
	printf("O elemento %d está na posição: %d\n", chave, ret);
	
	return 0;
}
