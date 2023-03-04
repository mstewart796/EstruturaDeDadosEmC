// Faça um programa que leia um numero inteiro positivo “N” e imprima
// todos os números naturais de 0 até “N” em ordem crescente.

#include <stdio.h>

void main() {

    int N;

    printf("Informe o valor de N: ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        printf("%d\n", i);
    }
}
