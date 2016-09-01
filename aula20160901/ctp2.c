#include <stdio.h>
#include <ctype.h>
int main()
{
    char frase[256], olheiro;
    int indice=0;
    printf("Digite alguma frase:");
    gets(frase);
    olheiro=frase[indice];
    while(olheiro!='\0')
    {
        frase[indice]=toupper(olheiro);
        indice++;
        olheiro=frase[indice];
    }
    printf("%s\n", frase);
    return 0;
}
