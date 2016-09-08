#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    int i;
    char string[256],aux;
    printf("Digite uma frase:");
    gets(string);
    strupr(string);
    aux=string[0];
    printf("%c", aux);
    for (i=0; string[i]!='\0'; i++)
    {
        if (string[i]==' ')
        {
            aux=string[i+1];
            printf("%c", aux);
        }
    }
    return 0;
}
