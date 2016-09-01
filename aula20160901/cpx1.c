#include <stdio.h>
#include <complex.h>
int main()
{
    double complex Z1,Z2,soma;
    double preal, pimag;
    printf("Digite a parte real do primeiro numero complexo:");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria do primeiro numero complexo:");
    scanf("%lf", &pimag);
    Z1=preal+pimag*I;
    printf("Digite a parte real do primeiro segundo complexo:");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria do segundo numero complexo:");
    scanf("%lf", &pimag);
    Z2=preal+pimag*I;
    soma=Z1+Z2;
    printf("Soma: %lf + %lf*I\n",creal(soma),cimag(soma));
    printf("Soma radianos: %lf + %lf*I\n",cabs(soma),carg(soma));
    return 0;
}
