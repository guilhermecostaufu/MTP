#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    int tamanho,x;
    char string[256], str2[256]="BOM DIA";
    printf("Digite uma frase:");
    gets(string);
    strupr(string);
    tamanho=strlen(string)-1;
    printf("%d\n", tamanho);
    x=strcmp(string,str2);
    if (x==0)
        printf("Bom dia para voce tambem!");
    else
        printf("Voce quer dizer:%s?\n",string);
    return 0;
}
