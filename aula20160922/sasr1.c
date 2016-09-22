#include <stdio.h>
#include <time.h>
int aleatorio()
{
    int x;
    srand(time(0));
    x = rand()%8;
    switch(x)
    {
        case 1:
            printf("Tudo bem?");
            break;
        case 2:
            printf("Ok");
            break;
        case 3:
            printf("LOL!");
            break;
        case 4:
            printf("Que legal");
            break;
        case 5:
            printf("Que chato");
            break;
        case 6:
            printf("Fale mais sobre isso");
            break;
        case 7:
            printf("Sobre o que quer falar?");
            break;
    }
}
int main()
{
    aleatorio();
    return 0;
}
