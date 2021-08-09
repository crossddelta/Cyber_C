#include <stdio.h>

int main(){

	//variáveis
	int nota1, nota2, nota3;
	float media;

	//entrada de dados
	printf("Informe a sua primeira nota: ");
	scanf("%d", &nota1);
	printf("Informe a sua segunda nota: ");
	scanf("%d", &nota2);
	printf("Informe a sua terceira nota: ");
	scanf("%d", &nota3);

	//corpo do programa
	media = (nota1 + nota2 + nota3)/3;

	if(media >= 7)
		printf("Parabéns, sua média foi %.1f. Você foi aprovado.", media);
	else if(media >= 5 && media < 7)
		printf("Sua média foi %.1f. Você está de recuperação.", media);
	else
		printf("Sua média foi %.1f. Você foi reprovado.", media);


	return(0);
}
