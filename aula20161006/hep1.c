#include <stdio.h>
#include <math.h>
void recebeVetor (float *vetor, int qtdade)
{
    int i;
    for (i=0;i<qtdade;i++)
    {
        printf("Entre com o elemento %d: ",i);
        scanf("%f", &vetor[i]);
    }
}
float media (float *vetor, int qtdade)
{
    float soma=0.f;
    int i;
    for(i=0;i<qtdade;i++)
        soma+=vetor[i];
    return soma/qtdade;
}
float desviopadrao (float *vetor, int qtdade)
{
    float soma=0.f;
    float m = media(vetor,qtdade);
    int i;
    for(i=0;i<qtdade;i++)
        soma+=pow((vetor[i]-m),2.f);
    return sqrt(soma/(qtdade-1));
}
int main()
{
    int qtdade;
    float *vetor;
    printf("Digite a qtdade de elementos: ");
    scanf("%d", &qtdade);
    vetor=(float *) calloc(qtdade,sizeof(float));
    recebeVetor(vetor,qtdade);
    printf("Media: %g; Desvio Padrao: %g\n", media(vetor,qtdade), desviopadrao(vetor,qtdade));
    free(vetor);
    return 0;
}
