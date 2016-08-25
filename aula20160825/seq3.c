#include <stdio.h>
int main()
{
	float A,B,C,MP;
	printf("Digite um valor de 0 a 10 para a nota do primeiro aluno: ");
	scanf("%f",&A);
	printf("Digite um valor de 0 a 10 para a nota do segundo aluno: ");
	scanf("%f",&B);
	printf("Digite um valor de 0 a 10 para a nota do terceiro aluno: ");
	scanf("%f",&C);
	if (A>10||A<0||B>10||B<0||C>10||C<0)
	{
		printf("Dados invalidos.");
		return 0;
	}
	MP=(A*2+B*3+C*5)/10;
	printf("Media ponderada das notas: %.2f\n",MP);
}
