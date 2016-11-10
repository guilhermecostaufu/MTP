#include <stdio.h>
#define MAXPILHA 1024 //tamanho maximo da pilha
typedef float DADO;  //muda o tipo da pilha aqui
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
	FILE * dados;
    int i;
    float VARFLOATARQUIVO;
    Pilha pilha;
    pilha.idtopo=-1; // Pilha vazia	
    //abre arquiv
	dados = fopen("dados.txt", "r");
	while(!feof(dados))
	{
		fscanf(dados, "%f", &VARFLOATARQUIVO);
    	push(&pilha, VARFLOATARQUIVO);
	}
	//fecha arquivo
	fclose(dados);
    printf("Push: ");
    printf("\nPop: ");
    while(!empty(pilha)) // testa EMPTY
    {
        printf("%f ",top(pilha)); // Testa TOP
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

