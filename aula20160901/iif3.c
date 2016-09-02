#include <stdio.h>
int main()
{
    int num,i=0;
    float inversao1,soma1;
    double inversao2,soma2;
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    inversao1=1.00/num;
    inversao2=1.00/num;
    soma1=inversao1;
    soma2=inversao2;
    while(i<728)
    {
        soma1=soma1+inversao1;
        soma2=soma2+inversao2;
        i++;
    }
    printf("%.15g\n", soma1);
    printf("%.15g\n", soma2);
    return 0;
}
