#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, soma;
    printf("Digite um numero real:");
    scanf("%d", &num1);
    printf("Digite outro numero real:");
    scanf("%d", &num2);
    unsigned int *p=NULL;
    p=&num1;
    printf("%p\n", *p);
    p=&num2;
    printf("%p\n", *p);
    soma=num1+num2;
    p=&soma;
    printf("Soma:%d\n", soma);
    printf("%p\n", *p);
    return 0;
}
