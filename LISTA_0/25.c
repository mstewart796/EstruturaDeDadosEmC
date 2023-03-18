//  Faça um programa que receba dois números. Calcule e mostre:
// - a soma dos números pares desse intervalo de números, incluindo os
// números digitados;
// - a multiplicação dos números ímpares desse intervalo, incluindo os
// digitados;

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;
    printf("Informe numero 1: ");
    scanf("%d", &numero1);
    
    printf("Informe numero 2: ");
    scanf("%d", &numero2);

    // inicialize sum as 0 but multi as 1 otherwise multi will stay as 0
    int soma = 0, multi = 1;

    for (int i = numero1; i <= numero2; i++) {
        // if to check if even    
        if (i % 2 == 0) {
            // if so, add to sum
            soma += i;
        } else {
            // else multiply the odd numbers
            multi *= i;
        }
    }

    printf("A soma dos numeros pares (inclusivos) entre %d e %d eh: %d\n", numero1, numero2, soma);
    printf("A multiplicacao dos numeros impares (inclusivos) entre este mesmo intervalo eh %d", multi);
}
