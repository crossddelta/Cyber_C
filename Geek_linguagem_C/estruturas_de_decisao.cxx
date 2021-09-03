/*Aula sobre estruturas de decisao*/

#include <stdio.h>
int idade;

int main()
{
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 18) printf("Nao alcancou a maioridade.");
	else if(idade > 18 && idade < 60) printf("Idade adulta.");
	else printf("Terceira idade.");
	return(0);
}