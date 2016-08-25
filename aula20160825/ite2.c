#include <stdio.h>
int main()
{
	int base,potencia,resultado;
	printf("Digite um numero inteiro para a base: ");
	scanf("%d",&base);
	printf("Digite um numero inteiro para a potencia: ");
	scanf("%d",&potencia);
	resultado=pow(base,potencia);
	printf("Resultado: %d\n", resultado);
	return 0;
}
