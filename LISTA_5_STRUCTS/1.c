//  Implemente um programa que registra o nome, matrícula, endereço e as 5 disciplinas de um 
// aluno. Armazene estes dados em uma estrutura. 
 
// Nome: Carlos Sara 
// Matrícula: 123456 
// Endereço: Rua do F, 11 – Recife. 
// Disciplinas: Matemática, Português, Geografia, Física e Biologia. 

#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    struct{

        char nome[50];
        int matricula;
        char endereco[100];
        char disciplinas[10][50];

    } aluno;

    strcpy(aluno.nome, "Carlos Sara");
    aluno.matricula = 123456;
    strcpy(aluno.endereco, "Rua do F, 11 - Recife");
    strcpy(aluno.disciplinas[0], "Matematica");
    strcpy(aluno.disciplinas[1], "Português");
    strcpy(aluno.disciplinas[2], "Geografia");
    strcpy(aluno.disciplinas[3], "Física");
    strcpy(aluno.disciplinas[4], "Biologia");

    printf("Nome: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Endereco: %s\n", aluno.endereco);
    printf("Disciplina 1: %s\n", aluno.disciplinas[0]);
    printf("Disciplina 2: %s\n", aluno.disciplinas[1]);
    printf("Disciplina 3: %s\n", aluno.disciplinas[2]);
    printf("Disciplina 4: %s\n", aluno.disciplinas[3]);
    printf("Disciplina 5: %s\n", aluno.disciplinas[4]);



}
