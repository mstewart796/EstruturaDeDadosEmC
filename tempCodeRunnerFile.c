// A importância de R$ 780.000,00 será dividida entre três ganhadores de
// um concurso. Sendo que da quantia total:
// - O primeiro ganhador receberá 46%;
// - O segundo receberá 32%;
// - O terceiro receberá o restante;
// Calcule e imprima a quantia ganha por cada um dos ganhadores.

#include <stdio.h> 

void main(){

    float valor = 780000, primeiro = valor * 0.46, segundo = valor * 0.32, terceiro = valor * (1 - (0.46 + 0.32));
    printf("O primeiro receberá: R$%.2f\n\
    O segundo receberá: R$%.2f\n\
    O terceiro receberá: R$%.2f\n", primeiro, segundo, terceiro);

}