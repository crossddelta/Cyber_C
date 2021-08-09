#include <stdio.h>

int main(){
	//variáveis
	int a, b, c;

	//entrada
	printf("Informe 3 comprimentos de lado, onde o primeiro deve ser o maior deles, "
			"\no segundo deve ser intermediário e o terceiro deve ser o menor."
			"\n\nPor favor, informe o primeiro valor: ");
	scanf("%d", &a);
	printf("Por favor, informe o segundo valor: ");
	scanf("%d", &b);
	printf("Por favor, informe o terceiro valor: ");
	scanf("%d", &c);

	//processamento e saída
	if(a > (b + c)) printf("As medidas não formam um triângulo");

	else if(a == b && a == c) printf("As medidas formam um triângulo equilátero");

	else if(a == b || a == c || b == c) printf("As medidas formam um triângulo isóceles");

	return(0);
}
