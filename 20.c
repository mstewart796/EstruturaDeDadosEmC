// Faça um programa que leia 10 inteiros e imprima sua media.

#include <stdio.h>

void main() {

    int valor, soma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Informe o %dº valor: ", i);
        scanf("%d", &valor);
        soma += valor;
    }
    
    float media = soma / 10;
    printf("A media dos valores eh: %.2f", media);
}
