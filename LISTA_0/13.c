// Faça um programa que receba a altura e o sexo de uma pessoa e calcule
// e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h
// corresponde à altura):
// - Homens: (72.7*h) − 58
// - Mulheres: (62, 1*h) − 44, 7

#include <stdio.h>

void main() {

    float h; 
    int sexo;

    printf("Informe a sua altura (em metros) : ");
    scanf("%f", &h);

    printf("Informe o seu sexo (1 para homem, 2 para mulher): ");
    scanf("%d", &sexo);

    float pesoIdeal;

    if (sexo == 1) {
        pesoIdeal = (72.7 * h) - 58;
    } else if (sexo == 2) {
        pesoIdeal = (62.1 * h) - 44,7;
    }

    printf("O seu peso ideal eh: %.2f", pesoIdeal);
}
