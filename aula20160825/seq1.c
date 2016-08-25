#include <stdio.h>
int main ()
{
	float lado_quadrado,area_quadrado;
	printf("Digite o lado do quadrado:");
	scanf("%f",&lado_quadrado);
	area_quadrado=lado_quadrado*lado_quadrado;
	printf("Area do quadrado: %.2f\n", area_quadrado);
	return 0;
}
