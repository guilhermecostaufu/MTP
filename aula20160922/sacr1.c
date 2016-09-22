#include <stdio.h>
#include <time.h>
int carta()
{
    int x;
    srand(time(0));
    x=1+rand()%13;
    return x;
}
int main()
{
    int i,aux=0,a,b,x;
    a=carta();
    b=carta();
    printf("Digite quantas cartas quer:");
    scanf("%d", &x);
    for(i=0; i<x; i++)
        aux+=carta();
    if (aux<=21 && aux>a+b)
        printf("Ganhou");
    else
        printf("Perdeu");
    return 0;
}
