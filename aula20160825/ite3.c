#include <stdio.h>
int main()
{
	int i;
	char palavra[256];
	printf("Digite uma palavra: ");
	scanf("%s",palavra);
	for (i=0; i<256; i++)
	{
		if (palavra[i]=='\0')
		{
			printf("A palavra possui %d caracteres\n",i);
			break;
		}
	}
	return 0;
}
