#include <stdio.h>
#include <math.h>
int main()
{
    float n,b,resultado;
    printf("Digite a base do logaritmo:");
    scanf("%f", &b);
    printf("Digite o numero desejado:");
    scanf("%f", &n);
    resultado=(log10(n))/(log10(b));
    printf("%f\n", resultado);
    return 0;
}
