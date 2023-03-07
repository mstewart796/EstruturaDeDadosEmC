//  Escreva um programa que leia um numero inteiro positivo “N” e em
// seguida imprima “N” linhas do chamado Triângulo de Floyd. Para n = 6,
// temos:

#include <stdio.h>

void main() {

    int N = 3;
    int counter = 1;
    int lineCounter = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= lineCounter; j++) {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
        lineCounter++;  
    }
}
