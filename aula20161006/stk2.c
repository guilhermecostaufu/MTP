#include <stdio.h>
#include <math.h>
#define N 5
float media(float vet[])
{
    int i;
    float med=0;
    for (i=0; i<N; i++)
        med+=vet[i];
    med=med/5;
    printf("%f",med);
    return med;
}
void desvio(float vet[],float u)
{
    int i;
    float s=0;
    for (i=0;i<N;i++)
        s+=pow((vet[i]-u),2);
    s=s/(N-1);
    s=sqrt(s);
    printf("\n%f",s);
}
int main()
{
    int i;
    float vet[N],u;
    for (i=0; i<N; i++)
    {
        printf("Digite o elemento %d: ",i);
        scanf("%f", &vet[i]);
    }
    u=media(vet);
    desvio(vet,u);
    return 0;
}
