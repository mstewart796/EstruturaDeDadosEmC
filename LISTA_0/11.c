// Faça um programa que receba um número inteiro e verifique se este
// número é par ou ímpar, positivo ou negativo.

#include <stdio.h>

void main() {

    int numero;
    printf("Informe o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero eh par\n");
    } else {
        printf("O numero eh impar\n");
    }

    
    if (numero < 0) {
        printf("O numero eh negativo");
    } else {
        printf("O numero eh positivo");
    }

}
