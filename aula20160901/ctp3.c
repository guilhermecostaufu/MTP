#include <stdio.h>
#include <ctype.h>
int main()
{
    char frase[256];
    int indice=0;
    printf("Digite alguma frase:");
    gets(frase);
    while(frase[indice]!='\0')
        indice++;
    printf("%d\n", indice);
    return 0;
}
