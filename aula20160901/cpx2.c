#include <stdio.h>
#include <complex.h>
int main()
{
    double complex Z1,Z2,prod;
    double preal, pimag;
    printf("Digite a parte real do primeiro numero complexo:");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria do primeiro numero complexo:");
    scanf("%lf", &pimag);
    Z1=preal+pimag*I;
    Z2=preal+(-1)*pimag*I;
    prod=Z1*Z2;
    printf("Produto: %lf + %lf*I\n",creal(prod),cimag(prod));
    printf("Produto radianos: %lf + %lf*I\n",cabs(prod),carg(prod));
    return 0;
}
