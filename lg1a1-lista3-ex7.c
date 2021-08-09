#include <stdio.h>

int main(){
	//variáveis
	char op;
	float num1, num2, res;

	//entrada
	printf("Informe dois números reais"
			"\nPrimeiro valor: ");
	scanf("%f", &num1);
	printf("Segundo valor: ");
	scanf("%f", &num2);
	printf("Informe o tipo de operação que deseja realizar (+, -, *, /): ");
	scanf("%s", &op);

	switch(op){
	case '+' : res = num1 + num2; printf("A soma dos valores é %.1f", res); break;
	case '-' : res = num1 - num2; printf("A subtração dos valores é %.1f", res); break;
	case '*' : res = num1 * num2; printf("A multiplicação dos valores é %.1f", res); break;
	case '/' : res = num1 / num2; printf("A divisão dos valores é %.1f", res); break;
	}
	return(0);
}
