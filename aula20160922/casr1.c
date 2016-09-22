#include <stdio.h>
#include <time.h>
int sorteio()
{
    int x;
    srand(time(0));
    x=1+rand()%10;
    return x;
}
int main()
{
    int a,b;
    b=sorteio();
    printf("Digite um numero de 1 a 10:");
    scanf("%d", &a);
    if(a==b)
        printf("Parabens");
    return 0;
}
