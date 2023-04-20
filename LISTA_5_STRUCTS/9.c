// Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), 
// autor (máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual 
// título deseja buscar. Mostre todos os dados do livro, caso seja encontrado. 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char titulo[30];
    char autor [15];
    int ano;
} Livro;

void main() {

    Livro livros[5];

    // I didn't take user input as I still haven't studied fgets
    // instead I made a loop to fill the data for 4 books
    for (int i = 0; i < 4; i++) {
        strcpy(livros[i].titulo, "Exemplo");
        strcpy(livros[i].autor, "Exemplo");
        livros[i].ano = 2023;
    }
    
    // I manually filled the final book that we will search for
    strcpy(livros[4].titulo, "find me");
    strcpy(livros[4].autor, "me");
    livros[4].ano = 2020;

    // created a boolean to track if our search is a success or not
    bool found = false;
    // created a search term
    char search[8] = "find me";
    // used string copy to search for the desired title
    for (int i = 0; i < 5; i++) {
        if (strcmp(livros[i].titulo, search) == 0) {
            printf("Titulo: %s\nAutor: %s\nAno: %d", livros[i].titulo, livros[i].autor, livros[i].ano);
            found = true;
        }
    }

    // if it wasn't found we'd prnt this message
    if (!found) printf("Livro not found");

}
