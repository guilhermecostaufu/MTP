#include <stdio.h>
int main()
{
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	if (num%2==0)
	printf("Numero par\n");
	else
	printf("Numero impar\n");
	if (num%3==0)
	printf("Numero multiplo 3\n");
	if (num%5==0)
	printf("Numero multiplo de 5\n");
	if(num%7==0)
	printf("Numero multiplo de 7\n");
	return 0;
}
