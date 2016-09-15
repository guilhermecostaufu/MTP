#include <stdio.h>
#include <ctype.h>
#define quantidade 1
struct Dados {
  char nome[100];
  int idade;
  int telefone;
};
int main()
{
    struct Dados vetdados[quantidade];
    int x,y,num=0,i;
    while(1)
    {
        printf("\nDigite:\n 1-Cadastra\n 2-Sair\n");
        scanf("%d", &x);
        if (x==2)
            break;
        printf("Digite o nome:\n");
        fflush(stdin);
        gets(vetdados[num].nome);
        printf("Digite a idade:\n");
        scanf("%d", &vetdados[num].idade);
        printf("Digite o telefone:\n");
        scanf("%d", &vetdados[num].telefone);
        num++;
    }
    do
    {
        printf("\n1-Listar nomes\n 2-Listar telefones\n 3-Listar idades\n 4-Sair\n");
        scanf("%d", &y);
        if (y==1)
            for (i=0; i<quantidade; i++)
                printf("Nome: %s\n", vetdados[i].nome);
        if (y==2)
            for (i=0; i<quantidade; i++)
                printf("Telefone: %d\n",vetdados[i].telefone);
        if (y==3)
            for (i=0; i<quantidade; i++)
                printf("Idade: %d\n",vetdados[i].idade);

    }while(y!=4);
    return 0;
}
