// Faça um programa que armazene em um registro de dados (estrutura composta) os dados 
// de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, 
// Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de 
// até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados 
// na estrutura e exibidos na tela. 

#include <stdio.h>

typedef struct {

        int dia;
        int mes;
        int ano;
    } Ddn;

typedef struct {

    char nome[50];
    int idade;
    char sexo;
    int cpf;
    Ddn ddn;
    int codigo;
    char cargo[30];
    float salario;
} Funcionario;

void main() {

}
