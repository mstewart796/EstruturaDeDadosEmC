// Faça um programa que faca operações simples de números complexos: 
 
//  - Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária. 
//  - Armazene e depois imprima na tela a soma, subtração e produto entre z e w, nessa ordem, 
// bem como o módulo de ambos. 
 
// OBS.: pesquise as fórmulas caso desconheça

#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct {

    float real;
    float imaginaria;
} Numero;

float somaReal(Numero z, Numero w);
float somaImaginaria(Numero z, Numero w);
float subtracaoReal(Numero z, Numero w);
float subtracaoImaginaria(Numero z, Numero w);
float produtoReal(Numero z, Numero w);
float produtoImaginaria(Numero z, Numero w);

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    Numero z, w;

    z.real = 1.0;
    z.imaginaria = 1.0;

    w.real = 2.5;
    w.imaginaria = -1.5;

    printf("*****SOMA*****\n\n");
    printf("REAL: z + w = %.2f\n", somaReal(z, w));
    printf("IMAGINARIA: z + w = %.2f\n", somaImaginaria(z, w));

    printf("\n*****SUBTRACAO*****\n\n");
    printf("REAL: z - w = %.2f\n", subtracaoReal(z, w));
    printf("IMAGINARIA: z - w = %.2f\n", subtracaoImaginaria(z, w));

    printf("\n*****PRODUTO*****\n\n");
    printf("REAL: z * w = %.2f\n", produtoReal(z, w));
    printf("IMAGINARIA: z * w = %.2f\n", produtoImaginaria(z, w));

}

float somaReal (Numero z, Numero w) {

    return z.real + w.real;
}

float somaImaginaria (Numero z, Numero w) {
 
    return z.imaginaria + w.imaginaria;
}

float subtracaoReal(Numero z, Numero w) {

    return z.real - w.real;;
}
float subtracaoImaginaria(Numero z, Numero w) {

    return z.imaginaria - w.imaginaria;
}

float produtoReal(Numero z, Numero w) {

    return z.real * w.real;;
}
float produtoImaginaria(Numero z, Numero w) {

    return z.imaginaria * w.imaginaria;
}