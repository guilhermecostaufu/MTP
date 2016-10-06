#include <stdio.h>
#define M 2
#define N 4
void preencher(float mat[][N])
{
    int i,j;
    for(i=0;i<M;i++)
        for (j=0;j<N;j++)
        {
            printf("Digite o elemento %d%d: ", i, j);
            scanf("%f", &mat[i][j]);
        }
}
void imprimir(float mat[][N])
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            printf("%g ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
}
void transposta(float mat[][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            printf("%g ", mat[j][i]);
        printf("\n");
    }
}
int main()
{
    float mat[M][N];
    preencher(mat);
    imprimir(mat);
    transposta(mat);
    return 0;
}
