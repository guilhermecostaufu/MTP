#include <stdio.h>
#include <time.h>
int main()
{
	int x,num,aux=0;
	srand(time(0));
	x=rand()%100;
	do
	{
		printf("Digite um numero entre 0 e 99: ");
		scanf("%d",&num);
		if (num>x)
			printf("Alto\n");
		if(num<x)
			printf("Baixo\n");
		if(num==x)
		{
			printf("Acertou\n");
			aux=1;
		}
	}while(aux==0);
	return 0;
}
