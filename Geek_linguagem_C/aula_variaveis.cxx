/*Aula sobre variaveis*/

#include <stdio.h>
int main()
{ /*As chaves delimitam um bloco de codigo*/

/*Declarando e inicializando variaveis*/
int idade, ano = 0;

/*Funcao para imprimir algo no console*/
printf("Qual a sua idade?\n");

/*Funcao para receber dados do teclado*/
scanf("%d", &idade);

/*Processamento*/
ano = 2021 - idade;

/*Saida de dados*/
printf("Voce nasceu no ano: %d", ano);
	
	return(0);
}