#include <stdio.h>

/*Protótipos das funções*/
int main(void);
void bubblesort(int * vetor);

/*Função principal*/
int main()
{
	int i, vetor[5];

	printf("Informe cinco valores inteiros para preencher o vetor.\n\n");
/*Loop para preencher o vetor*/
	for(i = 0; i < 5; i++)
	{
		printf("Informe o %dº valor do vetor: ", i+1);
		fflush(stdin);
		scanf("%d", &vetor[i]);
	}

	printf("\nOs valores informados no vetor foram: \n\n");
/*Loop para ler o vetor da forma que foi informado*/
	for(i = 0; i < 5; i++)
	{
		printf("Posição [%d] = %d\n", i, vetor[i]);
	}
	printf("\nLogo abaixo, o vetor ordenado de forma crescente.\n\n");

	bubblesort(vetor);

	for(i = 0; i < 5; i++)
	{
		printf("Posição [%d] = %d\n", i, vetor[i]);
	}

	return(0);
}

void bubblesort(int * vetor)
{
	int j, k, aux, flag = 0;

	for(j = 0; j < 5; j++)
	{
		for(k = 0; k < 4-j; k++)
		{
			if(vetor[k] > vetor[k+1])
			{
				aux = vetor[k];
				vetor[k] = vetor[k+1];
				vetor[k+1] = aux;
				flag = 1;
			}

			if(flag == 0) break;
		}
	}
}
