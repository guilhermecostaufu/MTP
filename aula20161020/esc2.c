#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void aleatorio ( int n, char * nome );
int main () {
    srand(time(0));
    int n;
    char nome[256];
    printf("Insira o numero de dados: ");
    scanf("%d", &n);
    printf("Insira o nome do seu arquivo: ");
    scanf("%s", nome);
    aleatorio(n, nome);
    return 0;
}
void aleatorio ( int n, char * nome ) {
    FILE * arquivo;
    int i, * vetor = (int *) malloc( n*sizeof(int) );
    arquivo = fopen(nome,"w");
    for ( i=0; i<n; i++ )
    {
        vetor[i] = rand()%100;
        fprintf(arquivo, "%d ", vetor[i]);
    }
    free(vetor);
    fclose(arquivo);
}
