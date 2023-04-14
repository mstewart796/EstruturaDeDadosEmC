// Implemente uma função que calcule a área da superfície e o volume de uma esfera de
// raio R.
// Essa função deve obedecer ao protótipo:
// void calc_esfera(float R, float *area, float *volume)
// A área da superfície e o volume são dados, respectivamente, por:
// A=4∗p∗R2
// V =4/3∗p∗R3
// Use p = 3.14

#include <stdio.h>
#include <locale.h>
#define PI 3.14

void calc_esfera(float R, float *area, float *volume);

void main() {
    
    setlocale(LC_ALL, "Portuguese");
    float R, area, volume;

    printf("Informe o valor de R: ");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    printf("A area é : %.2f\n", area);
    printf("O volume é : %.2f\n", volume);


}

void calc_esfera(float R, float *area, float *volume) {

    *area = 4 * PI * (R * R);
    *volume = (4 / 3) * PI * (R * R * R);

}
