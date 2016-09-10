#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,flag=0;
    char str[256],str2[256],aux;
    printf("Digite um texto: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            for(j=i;str[j]!='\0';j++)
                str[j]=str[j+1];
    }
    for(i=0;str[i]!='\0';i++)
        flag++;
    strupr(str);
    strcpy(str2,str);
    for(i=0;i<(flag)/2;i++)
    {
        aux=str[i];
        str[i]=str2[flag-1-i];
        str2[flag-1-i]=aux;
    }
    printf("%s\n", str);
    printf("%s\n", str2);
    if(strcmp(str,str2)==0)
        printf("Sao palindromos.");
    else
        printf("Nao sao palindromos");
    return 0;
}
