// Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>

void main() {

    float N1, N2, N3, N4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &N1);

    printf("Digite a segunda nota: ");
    scanf("%f", &N2);

    printf("Digite a terceira nota: ");
    scanf("%f", &N3);

    printf("Digite a quarta nota: ");
    scanf("%f", &N4);

    media = (N1 + N2 + N3 + N4) / 4;
    printf("A média é: %.1f\n", media);

}
