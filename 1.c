#include <stdio.h>
#include <stdlib.h>

int main(void){
    int opcaoCadastro;
    //variaveis de cadastro
    char nome[100];
    char endereco[100];
    char curso[50];
    char periodo[25];
    char disciplinas[100];
    int idade, matricula;

    printf("Bem vindo ao Sistema de Cadastro!");
    printf("\nDeseja fazer um novo cadastro ? (1 - sim  2 - nao):");
    scanf("%d", &opcaoCadastro);

    while (getchar() != '\n');

    if(opcaoCadastro == 1){
        system("cls");
        //nome
        printf("Informe seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        //idade
        printf("\nInforme sua idade: ");
        scanf("%d", &idade);
        //matricula
        printf("\nInforme sua matricula (apenas numero): ");
        scanf("%d", &matricula);
        getchar();
        //endereço
        printf("\nMe informe seu endereco: ");
        fgets(endereco, sizeof(endereco), stdin);
        //curso
        printf("\nMe informe seu curso: ");
        fgets(curso, sizeof(curso), stdin);
        //periodo
        printf("\nMe informe seu periodo: ");
        fgets(periodo, sizeof(periodo), stdin);
        //disciplinas
        printf("\nMe informe pelo menos 2 disciplinas que voce gosta: ");
        fgets(disciplinas, sizeof(disciplinas), stdin);

        system("cls");
    } else {
        printf("\nCaso deseje casdastrar alguem, execute o app novamente!");
        return 0; //acaba o programa
    }

    //Dados do usuario
    printf("Dados do usuario cadastrado!");
    printf("\n\n");
    printf("Nome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nMatricula: %d", matricula);
    printf("\nEndereco: %s", endereco);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %s", periodo);
    printf("\nDisciplinas Favoritas: %s", disciplinas);

    return 0;
}
