// 8. Leia o valor do raio de um círculo e calcule e imprima a área do círculo
// correspondente. A área do círculo é π*r² , considere π = 3.141592.

#include <stdio.h>

void main() {

    float raio, pi = 3.141592, area;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    area = (raio * raio) * pi;
    printf("A area do círculo é: %f\n", area);

}
