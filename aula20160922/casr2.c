#include <stdio.h>
#include <math.h>
#include <ctype.h>
int operacao(int x, float y, char z);
int main()
{
    int a;
    float b;
    char q;
    printf("Digite um inteiro:");
    scanf("%d", &a);
    printf("Digite um numero:");
    scanf("%f", &b);
    fflush(stdin);
    printf("Digite uma letra:");
    scanf("%c", &q);
    operacao(a,b,q);
    return 0;
}
int operacao(int x, float y, char z)
{
    printf("%d\n", x*x);
    printf("%f\n", sqrt(y));
    printf("%c\n", toupper(z));
}
