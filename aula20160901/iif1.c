#include <stdio.h>
#include <float.h>
#include <stdlib.h> //RAND_MAX
#include <time.h>
int main()
{
    int i;
    srand(time(0));
    double aux=DBL_EPSILON;
    if (1.0>1.0-aux)
        printf("1 eh maior que 1-EPSILON\n");
    else
        printf("1 eh igual ou menor que 1-EPSILON");
    for (i=0; i<10; i++)
        printf("%g\n", (float)rand()/(float)RAND_MAX);
    return 0;
}
