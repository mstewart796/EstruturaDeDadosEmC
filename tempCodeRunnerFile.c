// Faça um programa que leia dois valores inteiros e chame uma função que receba estes
// 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
// segunda variável. Escreva o conteúdo das 2 variáveis na tela.
#include <stdio.h>
#include <locale.h>

void maiorMenor(int *x, int *y);

void main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x, y;

    printf("Informe o primeiro valor: ");
    scanf("%d", &x);
    
    printf("Informe o segundo valor: ");
    scanf("%d", &y);

    maiorMenor(&x, &y);

}

void maiorMenor(int *x, int *y) {

    int maior, menor;

    if (x > y) {
        maior = *x;
        menor = *y;
    } else {
        maior = *y;
        menor = *x;
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

}