// Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de 
// alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de 
// até 5 alunos. Após ler todos os dados digitados, e depois de armazená-los em um vetor 
// de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas médias 
// finais (considere a média sendo a média aritmética).

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Aluno{

    int matricula;
    char nome[50];
    int codigo;
    int nota1;
    int nota2;
    float media;
};

void main() {

    struct Aluno alunos[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Informe a matricula do %dº/ª aluno/a: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Informe o nome dele/a: ");
        scanf("%s", alunos[i].nome);
        printf("Informe o codigo do departamento dele/a: ");
        scanf("%d", &alunos[i].codigo);
        printf("Informe a primeira nota dele/a: ");
        scanf("%d", &alunos[i].nota1);
        printf("Informe a primeira nota dele/a: ");
        scanf("%d", &alunos[i].nota2);
        alunos[i].media =(alunos[i].nota1 + alunos[i].nota2) / 2;
        }

    printf("---LISTA FINAL---\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota media de %s foi: %.2f\n", alunos[i].nome, alunos[i].media);
    } 
}
