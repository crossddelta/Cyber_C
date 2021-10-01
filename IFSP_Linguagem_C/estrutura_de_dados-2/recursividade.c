#include <stdio.h>

/*Protótipos das funções*/
int main(void);
int soma(int num);

int main()
{
	int valor;

	printf("Informe um valor: ");
	fflush(stdin);
	scanf("%d", &valor);

	printf("O resultado da soma recursiva de %d é: %d", valor, soma(valor));

	return(0);
}

int soma(int num)
{
	if(num == 0)
		return(0);

	else
		return(num + soma(num-1));
}
