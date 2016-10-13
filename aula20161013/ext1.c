#include <stdio.h>
#include <stdlib.h>
void media(int vetor[], int elementos)
{
    int i;
    float media,soma=0;
    for(i=0;i<elementos;i++)
    {
        soma+=vetor[i];
    }
    media=soma/elementos;
    printf("Media: %f\n", media);
}
void maior (int vetor[], int elementos)
{
    int i,j=0;
    for(i=0;i<elementos;i++)
        if(vetor[i]>j)
            j=vetor[i];
    printf("Maior numero: %d\n", j);
}
void menor(int vetor[], int elementos)
{
    int i,j=vetor[0];
    for(i=0;i<elementos;i++)
        if(vetor[i]<j)
            j=vetor[i];
    printf("Menor numero: %d\n", j);
}
int main()
{
    int i, *vetor=NULL, valor, n=0,j=0;
    vetor = (int *)malloc(n*sizeof(int));
    do
    {
        printf("Digite o numero %d: \n",j);
        scanf("%d", &valor);
        *(vetor+j)=valor; // vetor[j] = valor;
        printf("Valor no vetor: %d\n", *(vetor + j));
        j++;
        n++;
        media(vetor,n);
        maior(vetor,n);
        menor(vetor,n);
        printf("\n1-Digitar outro numero\n0-Sair.\n");
        scanf("%d", &i);
    }while(i!=0);
    free(vetor);
    return 0;
}

