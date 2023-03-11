//  Escreva um programa que leia um numero inteiro positivo “N” e em
// seguida imprima “N” linhas do chamado Triângulo de Floyd. Para n = 6,
// temos:

#include <stdio.h>

void main() {

    int N, counter = 1, lineCounter = 0;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= lineCounter; j++) {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
        lineCounter++;  
    }
}
