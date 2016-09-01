#include <stdio.h>
#include <math.h>
int main()
{
    float L1, L2, L3, Ang;
    printf("Digite um lado do triangulo:");
    scanf("%f", &L1);
    printf("Digite outro lado do triangulo:");
    scanf("%f", &L2);
    printf("Digite o angulo entre os lados(em radianos):");
    scanf("%f", &Ang);
    L3=pow((pow(L1,2)+ pow(L2,2) -2*L1*L2*cos(Ang)),0.5);
    printf("%f\n", L3);
    return 0;
}
