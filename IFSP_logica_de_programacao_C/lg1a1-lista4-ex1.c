/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[5], pares[5], cont = 0;

		for(i = 0; i < 6; i++){
			printf("Informe um valor: ");
			scanf("%d", &vetor[i]);
				if(vetor[i] > 0 && vetor[i] % 2 == 0){
					pares[cont] = vetor[i];
					cont++;
			}
		}
return(0);
}
