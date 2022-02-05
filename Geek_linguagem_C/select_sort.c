#include <stdio.h>

void select_sort(int vetor[], int tam){
	int menor, troca, i, j;
	
	for(i = 0; i <(tam-1); i++){
		menor = i;
		
		for(j = (i+1); j < tam; j++){
			if(vetor[j] < vetor[menor]){
				menor = j;
			}
		}
		if(i != menor){
			int troca = vetor[i];
			vetor[i] = vetor[menor];
			vetor[menor] = troca;
		}
	}
	
}

int main(){
	int i, vetor[6] = {8, 3, 1, 42, 12, 5};
	
	select_sort(vetor, 6);
	
	for(i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}


