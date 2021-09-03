#include <stdio.h>

int main(){
	//variáveis
	int i;
	float a, b, c, maior=-999, medio=-999, menor=999;

	//entrada
	printf("Escolha o código 1 ou 2: ");
	scanf("%d", &i);

	printf("Informe três valores: ");
	scanf("%f%f%f", &a, &b, &c);

	//processamento e saída
	if(a > maior)maior = a;
	if(b > maior)maior = b;
	if(c > maior)maior = c;
		if(a < maior)menor = a;
		if(b < maior)menor = b;
		if(c < maior)menor = c;
			if(a < maior && a > menor)medio = a;
			if(b < maior && b > menor)medio = b;
			if(c < maior && c > menor)medio = c;

	switch(i){

	case 1 : printf("Maior valor: %.1f\nValor intermediário: %.1f\nMenor valor: %.1f", maior, medio, menor); break;
	case 2 : printf("Menor valor: %.1f\nValor intermediário: %.1f\nMaior valor: %.1f", menor, medio, maior); break;
	}

	return(0);
}
