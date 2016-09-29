#include <stdio.h>
void inverte(char *frase,int n)
{
	if(frase[n] != '\0')
    {
		inverte(frase, n+1);
		printf("%c", frase[n]);
	}
}
int main()
{
	char frase[256];
	printf("Entre com uma frase: ");
	gets(frase);
	inverte(frase,0);
	return 0;
}
