//  Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima 
// o vetor, o maior elemento e a posição que ele se encontra.

#include <stdio.h>

void main() {

        int vetor[10], maior = 0, posicao;
    for (int i = 0; i < 10; i++) {
        printf("Informe o %dº numero: ", i);
        scanf("%d", &vetor[i]);
        if (i > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("O maior numero foi: %d, localizada em posicao vetor[%d]", maior, posicao);
}
