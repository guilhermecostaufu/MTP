#include <stdio.h>
int main()
{
    float num,aux;
    int i=0;
    printf("Digite um numero inteiro:");
    scanf("%f", &num);
    num=1.0/num;
    aux=num;
    while (i<729){
        num=num+aux;
        i++;
    }
    printf("%f\n", num);
    return 0;
}
