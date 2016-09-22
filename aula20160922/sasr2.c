#include <stdio.h>
int pares()
{
    int i;
    for(i=1;i<11;i++)
    {
        if (i%2==0)
            printf("%d\n", i);
    }
    printf("\n");
}
int impares()
{
    int i;
    for(i=1;i<11;i++)
    {
        if (i%2!=0)
            printf("%d\n", i);
    }
    printf("\n");

}
int main()
{
    int x;
    printf("Digite 1 para ver os pares e 2 para ver os impares: ");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
            pares();
            break;
        case 2:
            impares();
            break;
    }
    return 0;
}
