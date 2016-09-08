#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vet[10],i,aux;
    float S=0, P=1;
    for (i=0; i<10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }
    for (i=0; i<10; i++)
        S+=vet[i];
    for (i=0; i<10; i++)
        P=P*vet[i];
    printf("Somatoria:%f\n", S);
    printf("Produtoria:%f\n", P);
    return 0;
}
