#include <stdio.h>

int main(){
	//variáveis
	float horas_trab, valor_hora, salario;

	//entrada
	printf("Calcule o seu salário"
			"\n\nHoras trabalhadas no mês: ");
	scanf("%f", &horas_trab);
	printf("Valor de cada hora trabalhada: ");
	scanf("%f", &valor_hora);

	//processamento e saída
	salario = horas_trab * valor_hora;
	if(salario <= 1500){
		salario = salario + 300;
		printf("/nSeu salário será R$%.2f", salario);
	}
	else{
		salario = salario + 500;
		printf("\nSeu salário será R$%.2f", salario);
	}

	return(0);
}
