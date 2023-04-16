// Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e 
// armazene os dados em uma estrutura. Estas informações devem ser lidas do teclado.

#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    
    setlocale(LC_ALL, "Portuguese");

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

    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);


}