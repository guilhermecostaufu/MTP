#include <stdio.h>
int delta(int a, int b, int c)
{
   float delta,raiz,raiz1,raiz2,c1,c2;
   delta=b*b-4*a*c;
   printf("Delta: %f\n", delta);
   if (delta>0)
   {
       raiz1=(-b + sqrt(delta))/(2*a);
       raiz2=(-b - sqrt(delta))/(2*a);
       printf("Raiz 1: %f\n", raiz1);
       printf("Raiz 2: %f\n", raiz2);
   }
   if (delta==0)
   {
       raiz= -b/(2*a);
       printf("Unica Raiz: %f\n", raiz);
   }
   if (delta<0)
   {
       raiz1 = -b/(2*a);
       c1=sqrt(-delta)/(2*a);
       raiz2 = -b/(2*a);
       c2=sqrt(-delta)/(2*a);
       printf("Raiz 1: %f+i*%f\n", raiz1, c1);
       printf("Raiz 2: %f-i*%f\n", raiz2, c2);
   }


}
int main()
{
    int a,b,c;
    printf("Digite o o coeficiente a:");
    scanf("%d", &a);
    printf("Digite o o coeficiente b:");
    scanf("%d", &b);
    printf("Digite o o coeficiente c:");
    scanf("%d", &c);
    delta(a,b,c);
    return 0;
}
