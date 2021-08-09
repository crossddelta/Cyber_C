#include <stdio.h>

int main(){
	//variáveis
	float imc, peso, altura;

	//entrada
	printf("Informe o seu peso em kg: ");
	scanf("%f", &peso);
	printf("Informe a sua altura em metros: ");
	scanf("%f", &altura);

	//processamento
	imc = peso / (altura*altura);

	//saída
	if(imc < 20) printf("Seu IMC é: %.1f. Seu peso está abaixo do normal.", imc);
	if(imc >= 20 && imc < 25) printf("Seu IMC é: %.1f. Você está com o peso normal.", imc);
	if(imc >= 25 && imc < 30) printf("Seu IMC é: %.1f. Seu peso está acima do normal.", imc);
	if(imc >= 30 && imc < 34) printf("Seu IMC é: %.1f. Você está obeso.", imc);
	if(imc >= 34) printf("Seu IMC é: %.1f. Você está com obesidade mórbida.", imc);

	return(0);
}
