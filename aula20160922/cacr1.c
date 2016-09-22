#include <stdio.h>
int primo(int num)
{
   int i,aux=0;
   for(i=1;i<=num;i++)
        if (num%i==0)
            aux+=i;
    if(aux-1==num)
        return 1;
    else
        return 0;
}
int main()
{
    int i,x;
    printf("Digite um numero:");
    scanf("%d", &x);
    if (primo(x)==1)
        printf("O numero eh primo");
    else
    {
        printf("Nao eh primo");
        for(i=1;i<x;i++)
        {
            if(primo(i)==1)
                printf("%d\n", i);
        }
    }
    return 0;
}
