#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num,i,aux,aux2;
    printf("Digite um valor de 1 a 1000:");
    scanf("%d", &num);
    int vet[1000];
    for (i=0; i<num; i++)
        vet[i]=rand()%10;
    aux=vet[0];
    aux2=vet[0];
    for (i=0; i<num; i++)
    {
        if(aux<vet[i])
            aux=vet[i];
        if(aux2>vet[i])
            aux2=vet[i];
    }
    printf("Menor numero do vetor:%d\n", aux2);
    printf("Maior numero do vetor:%d\n", aux);
    return 0;
}
