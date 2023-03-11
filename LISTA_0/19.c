// Faça um programa que peça ao usuário para digitar 10 valores e some-os
// e imprima o resultado.

#include <stdio.h>

void main() {

    int valor, soma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Informe o %dº valor: ", i);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("A soma dos valores eh: %d", soma);
}
