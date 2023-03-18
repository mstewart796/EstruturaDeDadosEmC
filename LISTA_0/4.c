// Leia uma temperatura em graus Celsius e apresente-a convertida em
// graus Fahrenheit. A fórmula de conversão é: F = C*(9.0/5.0)+32.0, sendo
// F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

void main() {

    int C;

    printf("Informe a temperature em graus Celsius: ");
    scanf("%i", &C);

    float F = C*(9.0/5.0)+32.0;

    printf("%ic em graus Fahrenheit é: %.1ff\n", C, F);
}
