//  Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números 
// naturais que não são múltiplos de 5. 
 
#include <stdio.h>

void main() {

    int vetor[100], n = 0, counter = 1;
    while (n < 100) {
        if (counter % 5 != 0) {
            vetor[n] = counter;
            n++;
        }
        counter++;        
    }

    for (int i = 0; i < 100; i++) {
        printf("%d\n", vetor[i]);
    }
}
