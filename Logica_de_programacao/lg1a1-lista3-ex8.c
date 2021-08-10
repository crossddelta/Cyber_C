#include <stdio.h>

int main(){
	//variáveis
	int num1, num2, num3, maior=0;

	//entrada
	printf("Informe três valores: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	//processamento
	if(num1 > maior) maior = num1;
	if(num2 > maior) maior = num2;
	if(num3 > maior) maior = num3;

	//saída
	printf("Valor 1: %d\nValor 2: %d\nValor 3: %d\n\nO maior valor é o %d", num1, num2, num3, maior);


	return(0);
}
