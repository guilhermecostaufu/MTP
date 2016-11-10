#include <stdio.h>
#include <stdlib.h>
typedef int DADO; // Muda o tipo da pilha aqui

typedef struct Pilha_ {
    DADO topo;
    struct Pilha_ * proximo;
} Pilha;

void push ( Pilha ** ppilha, DADO elemento );
void pop ( Pilha ** ppilha );
DADO top( Pilha * pilha ); //Como está só verificando, pode ser SEM referência. Caso modificar, passar por referência
int empty ( Pilha * pilha );

int main () {
    int i;
    Pilha * pilha = NULL; //Pilha vazia
    //Programa
    printf("PUSH: ");
    for ( i=0; i < 5; i++ ){
        push(&pilha, 'A'+i); //Testa PUSH
        printf("%c ", top(pilha) );
    }
    printf("\nPop: ");
    while (!empty(pilha)) { //Testa empty
        printf("%c ", top(pilha)); //Testa TOP
        pop(&pilha);
    }
    printf("\n");
    return 0;
}
void push ( Pilha ** ppilha, DADO elemento ) {
    Pilha * novo = (Pilha*) malloc(sizeof(Pilha));  // Criando nova struct
    novo->topo = elemento;                          // Associando a nova struct com o elemento informado
    novo->proximo = *ppilha;                        // nova struct aponta para o topo atual
    *ppilha = novo;                                 // Apontando a pilha para o novo topo
}
void pop ( Pilha ** ppilha ) {
    Pilha * aux = NULL;
    if ( !empty(*ppilha) ) { //verifica se a pilha está vazia
        aux = (*ppilha)->proximo;
        free(*ppilha);
        *ppilha = aux;
    }
    else
        fprintf(stdout, "\nWARNING: Pilha vazia!\n\n");
}
DADO top( Pilha * pilha ) {
    return pilha->topo;
}
int empty ( Pilha * pilha ) {
    return ( pilha == NULL);
}
