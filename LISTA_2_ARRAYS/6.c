// Escreva um programa que leia 10 n�meros inteiros e os armazene em um vetor. Imprima 
// o vetor, o menor elemento e a posi��o que ele se encontra.

#include <stdio.h>

void main() {

    int vetor[10], menor, counter = 0, posicao;
    for (int i = 0; i < 10; i++) {
        printf("Informe o %d� valor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (counter == 0 || vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
        counter++;
    }
    printf("O menor valor eh: %d, encontrado em posicao vetor[%d]", menor, posicao);
}
