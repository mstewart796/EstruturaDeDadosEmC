// Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com os 
// tipos básicos necessários. 
 
// (a) Crie um vetor Cadastro com 5 elementos. 
// (b) Permita ao usuário entrar com dados para preencher estes 5 cadastros. 
// (c) Encontre a pessoa com maior idade entre os cadastrados 
// (d) Encontre as pessoas do sexo masculino 
// (e) Encontre as pessoas com sal  ́ ario maior que 1000.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char rua[50];
    char bairro[50];
    char cidade[50];
    char estado[2];
    float cep;
} Endereco;

typedef struct {

    char nome[50];
    Endereco endereco;
    float salario;
    char id[10];
    float cpf;
    char ec;
    float tele; 
    int idade;
    char sexo;
} Funcionario;

void main() {
    
    srand(time(NULL));
    Funcionario funcionarios[5];

    // I haven`t learnt fgets()  yet so I created a loop to prefill the data
    // used an if to create some male, some female
    for (int i = 0; i < 5; i++) {
        // used an if to create some male, some female
        if (i % 2 == 0) funcionarios[i].sexo = 'M';
        else funcionarios[i].sexo ='F';
        // all of the following are the same for everyone as it doesn't matter for the purpose
        // of the exercise
        strcpy(funcionarios[i].nome, "Example name");
        strcpy(funcionarios[i].endereco.rua, "Example Rua");
        strcpy(funcionarios[i].endereco.bairro, "Example Bairro");
        strcpy(funcionarios[i].endereco.cidade, "Example Cidade");
        strcpy(funcionarios[i].endereco.estado, "EX");
        funcionarios[i].endereco.cep = 1234;
        strcpy(funcionarios[i].id, "Example ID");
        funcionarios[i].tele = 1234;
        funcionarios[i].cpf = 1234;
        funcionarios[i].ec = 'C';
        // I randomised salaries to be between 500 and 1500 and ages from 18 to 62
        funcionarios[i]. salario = random() % 1001 + 500;
        funcionarios[i].idade = random() % 45 + 18;   
    }

    // print all men
    printf("Funcionarios masculinos: \n");
    for (int i = 0; i < 5; i ++) {
        if (funcionarios[i].sexo == 'M') {
            printf("%s\n", funcionarios[i].nome);
        }
    }
    
    // search for the max age
    int maxAge = 0;
    for (int i = 0; i < 5; i ++) {
        if (funcionarios[i].idade >= maxAge) {
            maxAge = funcionarios[i].idade;
        }
    }

    // print whoever matches max age
    printf("\nFuncionario/s com maior idade: \n");
    for (int i = 0; i < 5; i ++) {
        if (funcionarios[i].idade == maxAge) {
            printf("Nome: %s\nIdade: %d\n", funcionarios[i].nome, funcionarios[i].idade);
        }
    }

    // search for salaries > 1000
    printf("\nFuncionario/s salario maior que 1000: \n");
    for (int i = 0; i < 5; i ++) {
        if (funcionarios[i].salario > 1000) {
            printf("Nome: %s\nSalario: %.2f\n", funcionarios[i].nome, funcionarios[i].salario);
        }
    }

}
