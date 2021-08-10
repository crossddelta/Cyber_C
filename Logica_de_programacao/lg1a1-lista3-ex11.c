#include <stdio.h>

int main(){
	//variáveis
	float n_ext, n_fal, h_ext, h_fal, H, premio;

	//entrada
	printf("Informe, em minutos, o número de horas extras realizadas: ");
	scanf("%f", &n_ext);
	printf("Informe, em minutos, o número de horas-falta: ");
	scanf("%f", &n_fal);

	//processamento
	h_ext = n_ext / 60;
	h_fal = n_fal / 60;
	H = n_ext - ((2/3) * n_fal);
		if(H > 2400)premio = 500;
		if(H > 1801 && H <= 2400)premio = 400;
		if(H > 1201 && H <= 1800)premio = 300;
		if(H > 600 && H <=1200)premio = 200;
		if(H < 600)premio = 100;

	//saída
	printf("Quantidade de horas extras realizadas: %.1f"
			"\nQuantidade de horas-falta recebidas: %.1f"
			"\nPrêmio recebido: R$%.2f", h_ext, h_fal, premio);


	return(0);
}
