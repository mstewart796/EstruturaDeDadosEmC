// Faça um programa que leia um número inteiro e o imprima.

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Informe o número: ");
    scanf("%d", &numero);
    printf("\nO número foi: %d", numero);  

    return 0; 

}


