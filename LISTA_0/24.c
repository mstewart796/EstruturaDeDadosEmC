// Faça um programa que leia um numero inteiro positivo “N” e imprima
// todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    
    int N;

    printf("Informe o valor de N: ");
    scanf("%d", &N);

    for (int i = N; i >= 0; i--) {
        printf("%d\n", i);
    }
}
