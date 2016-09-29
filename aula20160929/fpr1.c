#include <stdio.h>
int divisao(int dividendo, int divisor, int *quociente, int *resto)
{
	if(divisor!=0)
	{
		*quociente = dividendo/divisor;
		*resto = dividendo%divisor;
		return 1;
	}
	else
		return 0;
}
int main()
{
	int num1,num2,q,r;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	if(divisao(num1,num2,&q,&r)==1)
		printf("Quociente: %d; Resto: %d\n",q,r);
	else
		printf("*erro*\n");
	return 0;
}
