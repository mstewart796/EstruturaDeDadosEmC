// Faça um programa que leia um numero inteiro “N” e depois imprima os N
// primeiros números naturais ímpares.
 
 #include <stdio.h>

 void main() {

    int N;

    printf("Informe o valor de N: ");
    scanf("%d", &N);

    for (int i = 0; i < N * 2; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
 }
