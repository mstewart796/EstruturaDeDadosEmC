// Faça um programa que imprima a tabuada de multiplicação de 1 a 9;

#include <stdio.h>

void main() {

    printf("-------------\n");
    printf("1 timestable\n");
    printf("-------------\n");
    for (int i = 1; i <= 10; i++) {
        printf("1 * %d = %d\n", i, 1 * i);
    }

    printf("-------------\n");
    printf("2 timestable\n");
    printf("-------------\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("2 * %d = %d\n", i, 2 * i);
    }

    printf("-------------\n");
    printf("3 timestable\n");
    printf("-------------\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("3 * %d = %d\n", i, 3 * i);
    }
}
