// Faça um vetor de tamanho 10 preenchido com o seguinte valor: (i+ 5 * i) / (i+1), sendo 
// i a posição do elemento no vetor. Em seguida imprima o vetor na tela. 

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    double vetor[10];

    for (int i = 1; i <= 10; i++) {
        vetor[i] = (i + 5 * 1) / (i+1);
        printf("Vetor[%d] = %.2lf\n", i, vetor[i]);
    }
}
