// Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da 
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
    soma = matriz[0][1] + matriz[0][2] + matriz[1][2];
    printf("A soma é: %d", soma);
}
