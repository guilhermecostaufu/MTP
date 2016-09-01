#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int main()
{
	int64_t fatorial=1;
	int num,i;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	for (i=2; i<=num; i++)
	{
		fatorial=fatorial*i;
	}
	printf("O fatorial do numero e: %" PRId64 ".\n", fatorial);
	return 0;
}
