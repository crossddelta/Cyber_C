#include <stdio.h>
#include <math.h>

/*
Fórmula da probabilidade binomial:
P(x) = nCx = n! / x! * (n-x)!

P(x) = nCx * p^x * q^n-x

*/


int main()
{
//Declarando variáveis
int n, x, nx, fat_n, fat_x, fat_nx, base_n, base_x;
float probabilidade, combinatoria, p, q, px, qnx;

printf("Informe o número total de testes e a quantidade de sucessos que deseja alcançar para saber a sua probabilidade: ");
fflush(stdin);
scanf("%d%d", &n, &x);

base_n = n;
base_x = x;
nx = n - x;

//Valor de p
p = (float)base_x / base_n;
px = pow(p, base_x);
printf("%.4f\n%.4f\n\n", p, px);

//Valor de q
q = 1 - p;
qnx = pow(q, nx);
printf("%.4f\n%.4f\n\n", q, qnx);

//Encontrando os fatoriais
for(fat_n = 1; n > 1; n--)
{
    fat_n = fat_n * n;
}
for(fat_x = 1; x > 1; x--)
{
    fat_x = fat_x * x;
}
for(fat_nx = 1; nx > 1; nx--)
{
    fat_nx = fat_nx * nx;
}

// Calculando a Combinatória (nCx)
combinatoria = (float)fat_n / (fat_x * fat_nx);

printf("Combinatória = %d[%.1f]%d = %d / (%d * %d)\n\n", base_n, combinatoria, base_x, fat_n, fat_x, fat_nx);

//Calculando a probabilidade
probabilidade = combinatoria * px * qnx;

printf("Probabilidade = %.1f%% = %.2f * %.4f * %.4f", probabilidade, combinatoria, px, qnx);

return(0);
}

