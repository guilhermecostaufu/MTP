#include <stdio.h>
int main()
{
	int num,i,fatorial=1;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	for (i=2; i<=num; i++)
	{
		fatorial=fatorial*i;
	}
	printf("O fatorial do numero e: %d\n",fatorial);
	return 0;
}
