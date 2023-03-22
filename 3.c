// Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na 
// diagonal principal. 

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3], soma;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe o valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) soma += matriz[i][j];
        }
    }

    printf("Soma = %d", soma);
}
