// Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a
// variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os
// ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o
// quádruplo.

#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");
    int A, *B, **C, ***D;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("O valor de A é: %d\n", A);
    printf("O valor de B é: %d\n", (*B) * 2);
    printf("O valor de C é: %d\n", (**C) * 3);
    printf("O valor de D é: %d\n", (***D) *4);

}
