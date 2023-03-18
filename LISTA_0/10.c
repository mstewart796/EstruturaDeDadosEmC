// Faça um programa que leia um número e, caso ele seja positivo, calcule e
// mostre:
// - O número digitado ao quadrado
// - A raiz quadrada do número digitado

#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

    float numero, quadrado, sqRoot;

    printf("Informe o número: ");
    scanf("%f", &numero);

    quadrado = numero * numero;
    sqRoot = sqrt(numero);

    printf("%f quadrado é %f e a raiz quadrado dele é %f\n", numero, quadrado, sqRoot);
}
