#include <stdio.h>

int main(){
	//variáveis
	int num1, num2;

	//entrada
	printf("Informe dois valores: ");
	scanf("%d%d", &num1, &num2);

	//processamento e saída
	if(num1 % num2 == 0) printf("Os valores informados são múltiplos");
	else printf("Os valores informados não são múltiplos");

	return(0);
}
