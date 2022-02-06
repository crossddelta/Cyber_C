#include <stdio.h>

void bubble_sort(int *vetor,int tam){
	int i, j, troca;
	
	for(i = 0; i < (tam-1); i++){
		for (j = 0; j < (tam-1)-i; j++){
			if(vetor[j] > vetor[j+1]){
				troca = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = troca;
			}
		}
	}
}

int main(){
	int i, vetor[6] = {8, 3, 1, 42, 12, 5};
	
	bubble_sort(vetor, 6);
	
	for(i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}
