#include <stdio.h>
#include <time.h>
int main()
{
	int num,sort,result;
	srand(time(0));
	printf("Digite um numero inteiro positivo: ");
	scanf("%d",&num);
	if (num<0)
	{
		printf("Dados invalidos.");
		return 0;
	}
	sort=rand()%2;
	result=num+sort;
	if (result%2==0)
	printf("Numero par");
	else
	printf("Numero impar");
	return 0;
}
