// Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

void main() {

    int first, second, third;

    printf("Informe o primeiro número: ");
    scanf("%i", &first);

    printf("Informe o segundo número: ");
    scanf("%i", &second);

    printf("Informe o terceiro número: ");
    scanf("%i", &third);

    int soma = first + second + third;
    
    printf("A soma de %i, %i e %i é %i \n", first, second, third, soma);
}
