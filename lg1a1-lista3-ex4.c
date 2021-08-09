#include <stdio.h>

int main(){
	//variáveis
	float geb, pc, alt, i;
	char sexo;

	//entrada
	printf("Você é do sexo masculino ou feminino? ");
	scanf("%c", &sexo);
	printf("Informe o seu peso corporal em kg: ");
	scanf("%f", &pc);
	printf("Informe a sua altura em cm: ");
	scanf("%f", &alt);
	printf("Informe a sua idade em anos: ");
	scanf("%f", &i);

	//processamento e saída

	switch(sexo){

	case 'm' : case 'M' : geb = 66.47 + (13.75 * pc)+(5 * alt)-(6.76 * i); printf("Seu GEB é de: %.2fkcal", geb); break;
	case 'f' : case 'F' : geb = 65.51 + (9.56 * pc)+(1.85 * alt)-(4.67 * i); printf("Seu GEB é de: %.2fkcal", geb); break;
	default : printf("Informação inválida, tente novamente!");
	};
	return(0);
}
