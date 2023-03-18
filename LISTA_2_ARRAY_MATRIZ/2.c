// Crie um programa que lê 5 valores inteiros e, em seguida, mostre na tela os valores lidos. 

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

    int array[5];
    for (int i = 0; i < 5; i++) {
        printf("Informe o %dº numero: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Here is your array: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
}
