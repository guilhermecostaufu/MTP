#include <stdio.h>
#include <string.h>
int main()
{
    int k,i;
    char string[256];
    printf("Digite o texto a ser criptografado: ");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        k=string[i];
        if((k>=65 && k<=77)||(k>=97 && k<=109))
            string[i]+=13;
        if((k>=78 && k<=90)||(k>=110 && k<=122))
            string[i]-=13;
    }
    printf("%s\n", string);
    return 0;
}
