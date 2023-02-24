// Leia uma velocidade em km/h (quilômetros por hora) e apresente-a
// convertida em m/s (metros por segundo). A fórmula de conversão é: M =
// K/3.6, sendo K a velocidade em km/h e M em m/s.

#include <stdio.h>

void main(){

    int K;

    printf("Informe a velocidade em km/h: ");
    scanf("%d", &K);
    
    float M = K/3.6;

    printf("%ikm/h é igual a %.2fm/s\n", K, M);
}