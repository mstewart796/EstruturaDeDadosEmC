// Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e 
// armazene os dados em uma estrutura. Estas informações devem ser lidas do teclado.

#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    // my code - we haven't been taught how to take strings that have blank space as an input so I'm not sure how fgets work.
    // I will research it at a later date when I have more time
    // I have included the chatgpt code with fgets at the bottom

    struct {

        char nome[50];
        int idade;
        char endereco[50];
    } pessoa;

    char inputNome[50];
    int inputIdade;
    char inputEndereco[50];

    printf("Informe o seu nome: ");
    scanf("%s", inputNome);

    printf("Informe a sua idade: ");
    scanf("%d", &inputIdade);

    printf("Informe o seu endereco: ");
    scanf("%s", inputEndereco);

    strcpy(pessoa.nome, inputNome);
    pessoa.idade = inputIdade;
    strcpy(pessoa.endereco, inputEndereco);

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);


}

// Chatgpt solution

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_DISCIPLINAS 5
// #define MAX_NOME 50
// #define MAX_ENDERECO 100

// typedef struct aluno {
//   char nome[MAX_NOME];
//   int matricula;
//   char endereco[MAX_ENDERECO];
//   char disciplinas[MAX_DISCIPLINAS]+[MAX_NOME];
// } Aluno;

// int main() {
//   Aluno carlos;

//   // Preenchendo as informações do aluno
//   strcpy(carlos.nome, "Carlos Saraiva");
//   carlos.matricula = 123456;
//   strcpy(carlos.endereco, "Rua do Futuro, 113 - Recife.");
//   strcpy(carlos.disciplinas[0], "Matemática");
//   strcpy(carlos.disciplinas[1], "Português");
//   strcpy(carlos.disciplinas[2], "Geografia");
//   strcpy(carlos.disciplinas[3], "Física");
//   strcpy(carlos.disciplinas[4], "Biologia");

//   // Imprimindo as informações do aluno
//   printf("Nome: %s\n", carlos.nome);
//   printf("Matrícula: %d\n", carlos.matricula);
//   printf("Endereço: %s\n", carlos.endereco);
//   printf("Disciplinas:\n");
//   for(int i = 0; i < MAX_DISCIPLINAS; i++) {
//     printf("- %s\n", carlos.disciplinas[i]);
//   }

//   return 0;
// }
