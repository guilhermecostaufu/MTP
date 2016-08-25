#include <stdio.h>
int main()
{
	int num,i;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if (num==1)
	{
		printf("Numero nao primo");
		return 0;
	}
	for (i=2; i<(num-1); i++)
		if (num%i==0)
		{
			printf("Numero nao primo");
			return 0;
		}
	printf("Numero primo");
	return 0;
}
