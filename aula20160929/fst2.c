#include <stdio.h>
struct Divisao
{
	int numerador;
	int denominador;
};
struct Divisao divisao(int num1, int den1, int num2, int den2);
int main()
{
	struct Divisao resposta;
	int num1,den1,num2,den2;
	printf("Digite o numerador e o denominador: ");
	scanf("%d/%d", &num1,&den1);
	printf("Digite o numerador e o denominador: ");
	scanf("%d/%d", &num2,&den2);
	resposta = divisao(num1,den1,num2,den2);
	printf("Numerador: %d; Denominador: %d\n", resposta.numerador, resposta.denominador);
	return 0;
}
struct Divisao divisao(int num1, int den1, int num2, int den2)
{
	struct Divisao resposta;
	resposta.numerador = den2*num1+den1*num2;
	resposta.denominador = den1*den2;
	return resposta;
}
