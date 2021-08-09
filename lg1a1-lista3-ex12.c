#include <stdio.h>

int main(){
	//variáveis
	float peso, alt;
	char sexo;

	//entrada
	printf("Você é do sexo masculino ou feminino? ");
	scanf("%c", &sexo);
	printf("Informe a sua altura em metros: ");
	scanf("%f", &alt);

	//processamento e saída

	switch(sexo){

	case 'm' : case 'M' : peso = 72.7 * alt - 58; printf("Seu peso ideal é: %.1fkg", peso); break;
	case 'f' : case 'F' : peso = 62.1 * alt - 44.7; printf("Seu peso ideal é: %.1fkg", peso); break;
	default : printf("Informação inválida, tente novamente!");
	}

	return(0);
}


