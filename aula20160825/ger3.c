#include <stdio.h>
int main()
{
	int i,num,aux=0;
	printf("Digite um numero: ");
	scanf("%d",&num);
	for (i=1; i<=(num-1); i++)
	{
		if (num%i==0)
			aux+=i;
	}
	if (aux==num)
		printf("O numero eh perfeito");
	else
		printf("O numero nao eh perfeito");
	return 0;
}
