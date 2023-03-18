// Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor
// correspondente em dólares.

#include <stdio.h>

void main() {

    float real, cota, dolar;
    printf("Informe o valor em real: R$");
    scanf("%f", &real);
    printf("Informe a cotação: ");
    scanf("%f", &cota);

    dolar = real * cota;
    printf("O valor de R$%.2f hoje é: $%.2f\n", real, dolar);
    
}
