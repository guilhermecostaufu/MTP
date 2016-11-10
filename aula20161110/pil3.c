#include <stdio.h>
#define MAXPILHA 10 //tamanho maximo da pilha
typedef int DADO;  //muda o tipo da pilha aqui
typedef struct Pilha_
{
    int idtopo;
    DADO dados[MAXPILHA];
}Pilha;
void push(Pilha * ppilha, DADO elemento);
void pop(Pilha * ppilha);
DADO top(Pilha pilha);
int empty(Pilha pilha);
int main()
{
    int i;
    Pilha pilha;
    pilha.idtopo=-1; // Pilha vazia
    printf("Push: ");
    for(i=0; i<1; i++)
    {
    	int valor;
    	printf("Digite o dado: ");
    	scanf("%d",&valor);
        push(&pilha, valor); // testa PUSH
        //printf("%d", top(pilha)); // TESTA TOP
        if (valor<0)
        	i=1;
        else
        	i--;
    }
    printf("\nPop: ");
    while(!empty(pilha)) // testa EMPTY
    {
        printf("%d ",top(pilha)); // Testa TOP
        pop(&pilha);
    }
    return 0;
}
void push(Pilha * ppilha, DADO elemento)
{
    if (ppilha->idtopo+1<MAXPILHA)
    {
        ppilha->idtopo++;
        ppilha->dados[ppilha->idtopo]=elemento;
    }
    else
        fprintf(stderr,"\nError::Estouro de pilha!\n");
}
void pop(Pilha * ppilha)
{
    if(ppilha->idtopo>=0)
    {
      ppilha->dados[ppilha->idtopo]= 0x0; //opcional, zera elemento
      ppilha->idtopo--;
    }
    else
        fprintf(stdout,"\nWarning::Pilha vazia!\n");
}
DADO top(Pilha pilha)
{
    return pilha.dados[pilha.idtopo];
}
int empty(Pilha pilha)
{
    return (pilha.idtopo==-1);
}

