#include <stdio.h>
int main()
{
    int num;
    int i=0;
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    num=1.0/num;
    while (i<729)
        num=num+num;
    printf("%f\n", num);
    return 0;
}
