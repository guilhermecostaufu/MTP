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
    int i,x,vet[300],k,j=0,l=0;
    printf("Digite um numero:");
    scanf("%d", &x);
    if (primo(x)==1)
        printf("O numero eh primo\n");
    else
    {
        printf("Nao eh primo\n");
    }
    for(i=1;i<x;i++)
    {
        if(primo(i)==1)
        {
            vet[j]=i;
            j++;
        }

    }
    for(k=0;k<j;k++)
        for(l=0;l<j;l++)
            if(vet[k]+vet[l]==x)
                printf("%d,%d\n",vet[k],vet[l]);

    return 0;
}
