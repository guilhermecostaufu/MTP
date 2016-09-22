#include <stdio.h>
#include <time.h>
int dado()
{
    int x;
    srand(time(0));
    x=1+rand()%6;
    return x;
}
int main()
{
    int i,aux=0,vet[5];
    for(i=0;i<5;i++)
    {
        vet[i]=dado();
        aux+=vet[i];
        if (aux>=27)
        {
            printf("%d", aux);
            return 0;
        }
    }
    printf("Perdeu.");
    return 0;
}
