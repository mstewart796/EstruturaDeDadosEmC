// Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3
// vezes. A primeira vez deve usar a estrutura de repetição “for”, a segunda
// vez a estrutura “while” e a terceira usando a estrutura “do while”

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    for (int i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }

    int i = 1, j = 1;
    
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }

    do {
        printf("%d\n", j);
        j++;
    } while (j <= 100);
}
