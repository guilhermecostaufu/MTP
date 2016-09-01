#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2;
    float d;
    printf("Digite a coordenada X do primeiro ponto:");
    scanf("%f", &x1);
    printf("Digite a coordenada Y do primeiro ponto:");
    scanf("%f", &y1);
    printf("Digite a coordenada X do segundo ponto:");
    scanf("%f", &x2);
    printf("Digite a coordenada Y do segundo ponto:");
    scanf("%f", &y2);
    d=pow((pow((x2-x1),2)+ pow((y2-y1),2)),0.5);
    printf("%f\n", d);
    return 0;
}
