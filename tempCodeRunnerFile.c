// leia a distância em Km e a quantidade de litros de gasolina consumidos
// por um carro em um percurso, calcule o consumo em Km/l e escreva uma
// mensagem de acordo com a tabela abaixo:

#include <stdio.h>

void main() {

    float km, gas, kml;

    printf("Informe a distanci em Km: ");
    scanf("%f", &km);

    printf("Informe a quantidade de gasonlina consumida em litros: ");
    scanf("%f", &gas);

    kml = km / gas; 

    if (kml < 8) {
        printf("Venda o carro!");
    } else if (kml >= 8 && kml <= 12) {
        printf("Economico!");
    } else {
        printf("Super economico!");
    }
}