#include <stdio.h>
#include <string.h>
#define NCHAR 256

void gravarDados();
void lerDados();
int main () {
    int opcao;
    do {
        printf("*********\n\n");
        printf("1 - Escrever informacoes\n2 - Ler informacoes\n0 - Sair ");
        scanf("%d", &opcao); getchar();
        printf("\n");
        if ( opcao == 1 )
            gravarDados();
        if ( opcao == 2 )
            lerDados();

    }while(opcao);
    return 0;
}
void gravarDados() {
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    printf("Entre com o nome: ");
    fgets(nome, NCHAR, stdin);
    printf("Entre com a idade: ");
    fscanf(stdin, "%d", &idade);
    printf("Entre com a altura: ");
    fscanf(stdin, "%f", &altura);
    arquivo = fopen("info.txt","w");
}
void lerDados() {
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    arquivo = fopen("info.txt","r");
    if ( arquivo == NULL )
        fprintf(stderr, "Arquivo nao existente!\n");
    else {
        fgets(nome, NCHAR, arquivo);
        nome[strlen(nome) - 1] = '\0'; //Excluindo o enter da string
        fscanf(arquivo, "%d\n%f\n", &idade, &altura); //Aqui tira o nome porque tem espaço
        fclose(arquivo);
        printf("Nome: ");
        fprintf(stdout, "%s\n", nome);
        printf("Idade: ");
        fprintf(stdout, "%d\n", idade);
        printf("Altura [m]: ");
        fprintf(stdout, "%g\n", altura);
    }
}
