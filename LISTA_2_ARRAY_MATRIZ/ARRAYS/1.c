// Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. 
// O programa deve executar os seguintes passos: 
// a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
// (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições 
// A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
// (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. 
// (d) Mostre na tela cada valor do vetor A, um em cada linha. 
 

 
#include <stdio.h>
#include <locale.h>

 void main() {
	setlocale(LC_ALL, "Portuguese");

    // step a
    int A[6] = {1, 0, 5, -2, -5, 7};
    // step b
    int simple = A[0] + A[1] + A[5];
    printf("The sum of postions 0, 1 and 5 are: %d\n", simple);
    // step c
    A[4] = 100;
    // step d
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }    
 }
