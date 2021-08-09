#include <stdio.h>

int main(){
	int idade;

	printf("Por favor, informe a sua idade: ");
	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7)printf("Categoria infantil A");
	if(idade >= 8 && idade <= 11)printf("Categoria infantil B");
	if(idade >= 12 && idade <= 13)printf("Categoria juvenil A");
	if(idade >= 14 && idade <=17)printf("Categoria juvenil B");
	if(idade >= 18)printf("Categoria adulto");

	return(0);
}
