#include <stdio.h>

void shell_sort(int *vetor, int tam){
	int i, grupo = 1;
	
	while(grupo < tam){
		grupo = 3 * grupo + 1;
	}
	
	while(grupo > 1){
		grupo /= 3;
		
		for(i = grupo; i < tam; i++){
			int troca = vetor[i];
			int j = i - grupo;
			
			while(j >= 0 && troca < vetor[j]){
				vetor[j + grupo] = vetor[j];
				j -= grupo;
			}
			vetor[j + grupo] = troca;
		}
	}
}

int main(){
	int i, vetor[6] = {8, 3, 1, 42, 12, 5};
	
	shell_sort(vetor, 6);
	
	for(i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}
