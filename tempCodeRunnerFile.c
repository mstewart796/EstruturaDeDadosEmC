// Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
// Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>
#include <locale.h>

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    float myMatriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("O endereço de myMatriz[%d][%d] é %p\n", i, j, &myMatriz[i][j]);
        }
    }

}