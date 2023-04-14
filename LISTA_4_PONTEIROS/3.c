// Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
// endereço de cada posição desse array.

#include <stdio.h>
#include <locale.h>

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    float myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++){
        printf("O endereço de myArray[%d] é %p\n", i, &myArray[i]);
    }
}
