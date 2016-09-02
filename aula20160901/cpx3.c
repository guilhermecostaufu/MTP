#include <stdio.h>
#include <complex.h>
#include <math.h>
int main()
{
    double complex Z1,raiz;
    double preal, pimag;
    printf("Digite a parte real do primeiro numero complexo:");
    scanf("%lf", &preal);
    printf("Digite a parte imaginaria do primeiro numero complexo:");
    scanf("%lf", &pimag);
    Z1=preal+pimag*I;
    raiz=csqrt(Z1);
    printf("Raiz: %lf + %lf*I\n",creal(raiz),cimag(raiz));
    return 0;
}
