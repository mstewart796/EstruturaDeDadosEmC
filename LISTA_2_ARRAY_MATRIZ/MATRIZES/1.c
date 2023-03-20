// Crie duas matrizes 2x2 que será preenchida pelo usuário e por fim imprima o 
// resultado. 

#include <stdio.h>
#include <locale.h>

void main() {
    
    int matriz1[2][2], matriz2[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Informe o valor de matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\nmatriz1[%d][%d]: ", matriz1[i][j]);
        }
    }


}
