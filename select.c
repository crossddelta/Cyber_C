#include <stdio.h>

void insert_sort(int *vetor, int tam){
	int i, troca;
	
	for(i = 1; i < tam; i++){
		int prox = i;
		
		while((prox != 0) && (vetor[prox] < vetor[prox-1])){
			troca = vetor[prox];
			vetor[prox] = vetor[prox-1];
			vetor[prox-1] = troca;
			prox--;
		}
	}
}

int main(){
	int i, vetor[6] = {8, 3, 1, 42, 12, 5};
	
	insert_sort(vetor, 6);
	
	for(i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}	
	
	return 0;
}
