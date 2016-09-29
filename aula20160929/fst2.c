#include <stdio.h>
struct dados
{
    int numerador;
    int denominador;
}dados;
int funcao(int x,int y,int z,int w)
{
    dados.numerador=x*w+z*y;
    dados.denominador=y*w;
}
int main()
{
    int num1,den1,num2,den2;
	printf("Digite o numerador e o denominador: ");
	scanf("%d/%d", &num1,&den1);
	printf("Digite o numerador e o denominador: ");
	scanf("%d/%d", &num2,&den2);
	funcao(num1,den1,num2,den2);
	printf("%d/%d", dados.numerador, dados.denominador);
    return 0;
}
