// Considerando a estrutura 
// struct Vetor{ 
// float x; 
// float y; 
// float z; 
// }; 
// para representar um vetor no R³, implemente um programa que calcule a soma de dois 
// vetores e armazena estas informações em uma estrutura. Os vetores são (1, 2, 3) e (0, 5, 10). 
 
  
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct {

    float x;
    float y;
    float z;
} Vetor;

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    Vetor vetor1 = {1.0, 2.0, 3.0}; 
    Vetor vetor2 = {0.0, 5.0, 10.0};
    Vetor result;

    result.x = vetor1.x + vetor2.x;
    result.y = vetor1.y + vetor2.y;
    result.z = vetor1.z + vetor2.z;

    printf("X = %.2f\n", result.x);
    printf("Y = %.2f\n", result.y);
    printf("Z = %.2f\n", result.z);
}
