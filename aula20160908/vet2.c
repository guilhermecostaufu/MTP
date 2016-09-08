#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vet[10],i,aux;
    for (i=0; i<10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }
    for (i=0; i<5; i++)
    {
        aux=vet[i];
        vet[i]=vet[9-i];
        vet[9-i]=aux;
    }
    for (i=0; i<10; i++)
        printf("%d\n", vet[i]);
    return 0;
}
