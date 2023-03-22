// Crie um programa que leia uma matriz 2x2 e calcule a sua determinante

#include <stdio.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    int matriz[2][2], determinante;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Informe o valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
    printf("A determinante é: %d", determinante);
}
