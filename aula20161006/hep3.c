#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
int main()
{
    char *texto=iniciaTexto();
    printf(":::::Inicio::::\n");
    recebeTexto(&texto);
    printf(":::::Na memoria::::");
    printf("%s\n",texto);
    printf("Tamanho da string: %d\n", strlen(texto));
    return 0;
}
char *iniciaTexto()
{
    char *texto = (char*)malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
void recebeTexto(char **texto)
{
    char *aux;
    int c, tamanho=0;
    do
    {
        c=getchar();
        if(c!='#')
        {
            aux=(char *)realloc(*texto,tamanho+2);
            if (aux != NULL)
            {
                *texto=aux;
                (*texto)[tamanho]=c;
                tamanho++;
                (*texto)[tamanho]='\0';
            }
            else
                printf("\n**Erro! Sem memoria!");
        }
    }while(c!='#');
}
