#include <stdio.h>

int main(){
	//variáveis
	float N, E, salario;

	//entrada
	printf("Informe o número de horas trabalhadas: ");
	scanf("%f", &N);

	//processamento e saída

	if(N > 50){
		E = N - 50;
		salario = ((N - E)*10) + E * 20;
	}
	else{
		E = 0;
		salario = N * 10;
	}

	printf("Seu salário será: R$%.2f\nO salário excedente é: R$%.2f", salario, E);

	return(0);
}
