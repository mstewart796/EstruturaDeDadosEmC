// Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
// apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
// lido.

#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    int myArray[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe o valor de myArray[%d]", i);
        scanf("%d", (myArray + i));
    }

    for (int i = 0; i < 5; i++) {
        printf("O dobro da valor dentro de myArray[%d] é: %d\n", i, *(myArray + i) * 2);
    }
    
}
