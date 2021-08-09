#include <stdio.h>

int main(){
	int num, maior=-999, menor=999, media;

	for(int i = 0; i < 10; i++){
		printf("Informe um valor inteiro e positivo: ");
		scanf("%d", &num);
			if(num > maior)maior = num;
			if(num < menor)menor = num;
	}
	media = (maior + menor)/10;
	printf("O maior valor é: %d"
			"\nO menor valor é: %d"
			"\nA média dos valores é: %d", maior, menor, media);

	return(0);
}
