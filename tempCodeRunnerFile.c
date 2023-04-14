// Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma
// função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o
// dobro de A na própria variável A e o dobro de B na própria variável B.

#include <stdio.h>
#include <locale.h>

int soma(int *A, int *B) {

    *A = *A * 2;
    *B = *B * 2;
    int soma = *A + *B;
    return soma;

    
}

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    printf("O resultado da soma é: %d\n", soma(&A, &B));
    printf("O novo valor de A é: %d\n", A);
    printf("O novo valor de B é: %d", B);

}