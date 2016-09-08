#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num,vet[10000],i=0;
    float S=0;
    printf("Digite um numero intero nao negativo:");
    scanf("%d", &num);
    for(i=0; i<10000; i++)
    {
        vet[i]=rand()%(num+1);
        S+=vet[i];
    }
    S=S/10000;
    printf("%f\n", S);
    return 0;
}
