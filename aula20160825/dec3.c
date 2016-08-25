#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(0));
	int dado1,dado2,dado3,resultado;
	dado1=rand()%6+1;
	dado2=rand()%6+1;
	dado3=rand()%6+1;
	resultado=dado1+dado2+dado3;
	if(resultado==7||resultado==11)
	printf("O jogador ganhou");
	else
	printf("O jogador perdeu");
	return 0;
}
