#include <stdio.h>
#include <ctype.h>
#include <string.h>
void funcao(char *string, char *string2, int tamanho)
{
	int i, j=0;
	for(i=0; i<tamanho; i++)
		if(isalpha(string[i]) )
		{
			string2[j]=string[i];
			j++;
		}
	string2[j] = '\0';
	printf("%s", string2);
}
int main()
{
	char string[256], string2[256];
	printf("Digite a string:");
	gets(string);
	funcao(string,string2,strlen(string) );
	return 0;
}

