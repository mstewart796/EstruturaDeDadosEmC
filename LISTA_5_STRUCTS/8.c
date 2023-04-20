// Faça um programa que armazene em um registro de dados (estrutura composta) os dados 
// de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, 
// Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de 
// até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados 
// na estrutura e exibidos na tela. 

#include <stdio.h>
#include <string.h>

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

   Funcionario testWorker;

   strcpy(testWorker.nome, "Martin");
   testWorker.idade = 32;
   testWorker.sexo = 'M';
   testWorker.cpf = 123123;
   testWorker.ddn.dia = 5;
   testWorker.ddn.mes = 11;
   testWorker.ddn.ano = 1990;
   testWorker.codigo = 123;
   strcpy(testWorker.cargo, "Programador");
   testWorker.salario = 1234.12;

   printf("Nome = %s\n", testWorker.nome);
   printf("Idade = %d\n", testWorker.idade);
   printf("Sexo = %c\n", testWorker.sexo);
   printf("CPF = %d\n", testWorker.cpf);
   printf("Data de nascimento = %d/%d/%d\n", testWorker.ddn.dia, testWorker.ddn.mes, testWorker.ddn.ano);
    printf("Codigo = %d\n", testWorker.codigo);
    printf("Cargo = %s\n", testWorker.cargo);
    printf("Salario = %f\n", testWorker.salario);
}
