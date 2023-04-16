// Refaça a questão anterior de modo que os vetores sejam genéricos oferecidos pelo usuário 
// através do teclado e o programa deve apresentar o resultado.


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

struct Vetor {

    float x;
    float y;
    float z;
};

void main() {
    
    setlocale(LC_ALL, "Portuguese");

    struct Vetor vetor1; 
    struct Vetor vetor2;
    struct Vetor result;

    printf("Informe o X, Y, e Z do primeiro vetor:\n");
    scanf("%f %f %f", &vetor1.x, &vetor1.y, &vetor1.z);

    printf("Informe o X, Y, e Z do segundo vetor:\n");
    scanf("%f %f %f", &vetor2.x, &vetor2.y, &vetor2.z);

    result.x = vetor1.x + vetor2.x;
    result.y = vetor1.y + vetor2.y;
    result.z = vetor1.z + vetor2.z;

    printf("X = %.2f\n", result.x);
    printf("Y = %.2f\n", result.y);
    printf("Z = %.2f\n", result.z);
}
