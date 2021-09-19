#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Protótipos das funções*/
int main();
void ex_um(void);
void ex_dois(void);
void ex_tres(void);
void ex_quat(void);
void ex_cinco(void);
void ex_seis(void);
void ex_sete(void);
void ex_oito(void);
void ex_nove(void);
void ex_dez(void);
void ex_onze(void);
int maior(int * vetor);
int menor(int * vetor);

int main()
{
	setlocale(LC_ALL, "");
	int opc;
do
{
	printf("====================================================================================================\n");
	printf("				1ª LISTA DE EXERCÍCIOS - REVISÃO			\n\n");
	printf("====================================================================================================\n\n");
	printf("1- Desenvolver um programa para ler um número inteiro e exibir se é par ou ímpar.\n\n");
	printf("2- Desenvolver um programa para ler um número inteiro e exibir se é múltiplo de três ou múltiplo de cinco.\n\n");
	printf("3- Desenvolver um programa para ler um número inteiro e exibir se é divisível por sete ou três.\n\n");
	printf("4- Desenvolver um programa para ler três números quaisquer e informar qual deles é o maior número.\n\n");
	printf("5- Escreva um programa que, dadas duas datas, determine qual delas ocorreu cronologicamente antes "
			"em relação a outra. Cada data é composta de três números inteiros, um representando o ano, outro "
			"o mês e outro o dia. Neste exercício você deve utilizar uma estrutura para armazenar e comparar "
			"as duas datas, cada data com três campos descritos acima.\n\n");
	printf("6- Faça um programa que receba uma data de validade e a data atual e indique se o produto já está "
			"vencido ou não. (obs: assuma que o usuário informará datas válidas). Novamente, você deverá utilizar "
			"estrutura (struct) para armazenar as datas.\n\n");
	printf("7- Desenvolver um programa para ler três números quaisquer e informar qual deles é o menor número e "
			"qual deles é o maior número.\n\n");
	printf("8- Desenvolver um programa para ler o nome de um produto e o valor de custo e exibir o valor de venda "
			"do produto. O valor de venda é o seu valor de custo acrescido em 30%%.\n\n");
	printf("9- Escreva um programa que, dado um número em segundos, converta para dias, horas, minutos e segundos. "
			"Por exemplo, 7322 segundos correspondem a 0 dias, 2 horas, 2 minutos e 2 segundos.\n\n");
	printf("10- Desenvolver um programa para ler três números e apresentar como valor final o resultado da soma "
			"dos quadrados dos três números lidos.\n\n");
	printf("11- Faça um programa para ler 15 valores em um vetor. Em seguida, determine o maior e o menor elemento"
			"lido. Faça uso de uma função chamada maior, que deverá retornar o maior elemento do vetor e outra "
			"função chamada menor, que deverá retornar o menor elemento do vetor.\n\n");
	printf("0- Sair do programa.\n\n");
	printf("\nDigite o número do exercício que deseja visualizar: ");
	fflush(stdin);
	scanf("%d", &opc);

	switch(opc)
	{
		case 1 : 
			{
				system("cls");
				ex_um(); 
				getch();
				break;
			}
		case 2 :
			{
				system("cls");
				ex_dois();
				getch();
				break;
			}
		case 3 :
			{
				system("cls");
				ex_tres();
				getch();
				break;
			}
		case 4 :
			{
				system("cls");
				ex_quat();
				getch();
				break;
			}
		case 5 :
			{
			system("cls");
			ex_cinco();
			getch();
			break;								
			}
		case 6 :
			{
			system("cls");
			ex_seis();
			getch();
			break;				
			}
		case 7 :
			{
			system("cls");
			ex_sete();
			getch();
			break;				
			}
		case 8 :
			{
			system("cls");
			ex_oito();
			getch();
			break;				
			}
		case 9 :
			{
			system("cls");
			ex_nove();
			getch();
			break;				
			}
		case 10 :
			{
			system("cls");
			ex_dez();
			getch();
			break;				
			}
		case 11 :
			{
			system("cls");
			ex_onze();
			getch();
			break;				
			}
		default :
			{
			system("cls");
			printf("Opção inválida, tente novamente!");
			getch();
			break;
			}
		case 0 :
			{
			system("cls");
			printf("\nPrograma encerrado com sucesso!");
			getch();
			exit(0);				
			}
	}
}
while(opc != 0);
	return(0);
}

void ex_um(void)
{
	int num;

	printf("Informe um valor para verificar se é par ou ímpar: ");
	fflush(stdin);
	scanf("%d", &num);

	if(num % 2 == 0) printf("O número %d informado é par.", num);
	else printf("O número %d informado é ímpar.", num);
	
	return;
}

void ex_dois(void)
{
	int num;
	
	printf("Informe um valor para saber se é múltiplo de 3 ou múltiplo de 5: ");
	fflush(stdin);
	scanf("%d", &num);
	
	if(num % 3 == 0)
		{
			printf("O número %d é múltiplo de 3.\n", num);
			if(num % 5 == 0) 
				{
					printf("Além disso, o valor também é múltiplo de 5.\n", num);
				}
		}
	else if(num % 5 == 0)
		{
			printf("O número %d é múltiplo de 5.\n", num);
		}
	else printf("O número informado não é múltiplo de 3, nem de 5.");
	
	return;
}

void ex_tres(void)
{
	int num;
	
	printf("Informe um valor para saber se é divisível por 7 ou por 3: ");
	fflush(stdin);
	scanf("%d", &num);
	
	if(num % 3 == 0)
	{
		printf("\nO número %d é divisível por 3.", num);
		
		if(num % 7 == 0)
		{
			printf("\nAlém disso, esse número também é divisível por 7.");
		}
	}
	else if(num % 7 == 0)
	{
		printf("\nO número %d é divisível por 7.", num);
	}
	else printf("\nO valor informado não é divisível por 3, nem por 7.");
	
	return;
}

void ex_quat(void)
{
	int num, maior = 0;
	
	printf("Por favor, informe três valores.\n");

	for(int i = 0; i < 3; i++)
	{
		printf("Valor %d/3: ", i+1);
		fflush(stdin);
		scanf("%d", &num);
			if(num > maior)
				maior = num;
	}

	printf("O maior valor informado foi: %d", maior);

	return;
}

void ex_cinco(void)
{
	typedef struct
	{ 
	int dia_atual;
	int dia;
	int mes_atual;
	int mes;
	int ano_atual;
	int ano;
	} registro;
	
	registro data;
	
	printf("Informe abaixo a data atual no formato (dd/mm/aaaa)\n");
	
	printf("\nInforme o dia atual: ");
	fflush(stdin);
	scanf("%d", &data.dia_atual);
	
	printf("\nInforme o mês atual: ");
	fflush(stdin);
	scanf("%d", &data.mes_atual);
	
	printf("\nInforme o ano atual: ");
	fflush(stdin);
	scanf("%d", &data.ano_atual);
	
	printf("\n\nA data atual é: %02d/%02d/%04d\n\n", data.dia_atual, data.mes_atual, data.ano_atual);
	printf("\nAgora, informe abaixo uma data qualquer, para compará-la à data atual. ");
	
	printf("\n\nInforme um dia: ");
	fflush(stdin);
	scanf("%d", &data.dia);
	
	printf("\nInforme um mês: ");
	fflush(stdin);
	scanf("%d", &data.mes);
	
	printf("\nInforme um ano: ");
	fflush(stdin);
	scanf("%d", &data.ano);
	
	printf("\n\nA data informada foi: %02d/%02d/%04d\n\n", data.dia, data.mes, data.ano);
	if(data.ano > data.ano_atual)
	{
		printf("\nA data informada está no futuro, se comparada à data atual.");
	}
	else if(data.ano == data.ano_atual && data.mes > data.mes_atual)
	{
		printf("\nA data informada está no futuro, se comparada à data atual.");		
	}
	else if(data.ano == data.ano_atual && data.mes == data.mes_atual && data.dia > data.dia_atual)
	{
		printf("\nA data informada está no futuro, se comparada à data atual.");
	}
	else
		printf("\nA data informada está no passado, se comparada à data atual.");
		
	return;
}

void ex_seis(void)
{
	typedef struct
	{ 
	int dia_atual;
	int dia;
	int mes_atual;
	int mes;
	int ano_atual;
	int ano;
	} registro;
	
	registro data;
	
	printf("Informe abaixo a data atual no formato (dd/mm/aaaa)\n");
	
	printf("\nInforme o dia atual: ");
	fflush(stdin);
	scanf("%d", &data.dia_atual);
	
	printf("\nInforme o mês atual: ");
	fflush(stdin);
	scanf("%d", &data.mes_atual);
	
	printf("\nInforme o ano atual: ");
	fflush(stdin);
	scanf("%d", &data.ano_atual);
	
	printf("\n\nA data atual é: %02d/%02d/%04d\n\n", data.dia_atual, data.mes_atual, data.ano_atual);
	printf("\nAgora, informe abaixo a data de validade do produto. ");
	
	printf("\n\nInforme o dia: ");
	fflush(stdin);
	scanf("%d", &data.dia);
	
	printf("\nInforme o mês: ");
	fflush(stdin);
	scanf("%d", &data.mes);
	
	printf("\nInforme o ano: ");
	fflush(stdin);
	scanf("%d", &data.ano);
	
	printf("\n\nA data informada foi: %02d/%02d/%04d\n\n", data.dia, data.mes, data.ano);
	if(data.ano > data.ano_atual)
	{
		printf("\nO produto está dentro da validade, portanto pode ser consumido.");
	}
	else if(data.ano == data.ano_atual && data.mes > data.mes_atual)
	{
		printf("\nO produto está dentro da validade, portanto pode ser consumido.");		
	}
	else if(data.ano == data.ano_atual && data.mes == data.mes_atual && data.dia > data.dia_atual)
	{
		printf("\nO produto está dentro da validade, portanto pode ser consumido.");
	}
	else
		printf("\nO produto ultrapassou a data de validade, já não é mais próprio para o consumo.\n\nDescarte-o adequadamente.");
	
	return;
}

void ex_sete(void)
{
	float num, maior = 0, menor = 999999;
	
	printf("Por favor, informe três valores.\n");

	for(int i = 0; i < 3; i++)
	{
		printf("Valor %d/3: ", i+1);
		fflush(stdin);
		scanf("%f", &num);
			if(num > maior)
				maior = num;
			if(num < menor)
				menor = num;
	}

	printf("O maior valor informado foi: %.1f\n", maior);
	printf("O menor valor informado foi: %.1f\n", menor);
	
	return;
}

void ex_oito(void)
{
	float valor_custo, valor_venda;
	char nome[30];
	
	printf("Por favor, informe o nome do produto: ");
	fflush(stdin);
	gets(nome);
	
	printf("\nInforme o valor de custo do produto para visualizar o valor de venda recomendado: R$");
	fflush(stdin);
	scanf("%f", &valor_custo);
	
	valor_venda = valor_custo + (valor_custo * 0.3);
	
	printf("\nO valor de venda recomendado para o produto [%s] é de: R$%.2f", nome, valor_venda);
	
	return;
}

void ex_nove(void)
{
	int valor, segundos, minutos, horas;
	
	printf("Informe uma quantidade de tempo em segundos: ");
	fflush(stdin);
	scanf("%d", &valor);
	
	horas = valor / 3600;
	minutos = (valor % 3600) / 60;
	segundos = (valor % 3600) % 60;
	
	printf("\n%d segundos equivalem à:\n%02d horas\n%02d minutos\n%02d segundos", valor, horas, minutos, segundos);
	return;
}

void ex_dez(void)
{
	int num[3], quad[3], soma;
	
	printf("Informe três valores: \n");
	for(int i = 0; i < 3; i++)
	{
		printf("\nValor %d/3: ", i+1);
		fflush(stdin);
		scanf("%d", &num[i]);
	
		quad[i] = num[i] * num[i];
	}
	
	for(int j = 0; j < 3; j++)
	{
		soma = soma + quad[j];
	}
	
	printf("\nA soma do quadrado dos três valores informados é: %d", soma);
	
	return;
}

void ex_onze(void)
{
	int vetor[15];
	
	printf("Informe abaixo quinze valores para preencher o vetor:");
	
	for(int i = 0; i < 15; i++)
	{
		printf("\nValor %d/15: ", i+1);
		fflush(stdin);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nMaior valor informado no vetor: %d", maior(vetor));
	printf("\nMenor valor informado no vetor: %d", menor(vetor));
	
	return;
}

int maior(int * vetor)
{
	int maior = 0;
	
	for(int i = 0; i < 15; i++)
	{
		if(vetor[i] > maior)
			maior = vetor[i];
	}
	
	return(maior);
}

int menor(int * vetor)
{
	int menor = 9999999;
	
	for(int i = 0; i < 15; i++)
	{
		if(vetor[i] < menor)
			menor = vetor[i];
	}
	
	return(menor);
}
