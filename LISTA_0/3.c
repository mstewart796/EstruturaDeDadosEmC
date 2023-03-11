// Desenvolva um algoritmo em C que leia um número inteiro e imprima o
// seu antecessor e seu sucessor.

#include <stdio.h>

void main(){

    int numero;

    printf("Informe um número: ");
    scanf("%i", &numero);

    int ante = numero -1;
    int suce = numero + 1;
    
    printf("O seu número foi %d, o seu antecessor é %d e o seu sucessor é %d\n", numero, ante, suce);

}