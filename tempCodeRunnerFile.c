// Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números 
// naturais.

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[100];
    for (int i = 1; i <= 100; i++) {
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }
    
    }