// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Calcule o 
// desvio padrão e imprima na tela o resultado. 
 
// O desvio padrão (DP) é calculado usando-se a seguinte fórmula: 
 
// Sendo, 
// ∑: símbolo de somatório. Indica que temos que somar todos os termos, desde 
// a primeira posição (i=1) até a posição n 
// xi: valor na posição i no conjunto de dados 
// MA: média aritmética dos dados 
// n: quantidade de dados 

#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

    double vetor[10], soma = 0.0, media = 0.0, somaDP = 0.0, DP = 0.0;
    
    // for loop to read the values and sum the total
    for (int i = 0; i < 10; i++) {
        printf("Informe o %dº número: ", i+1);
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / 10;

    // for loop to calculate the standard deviation
    for (int i = 0; i < 10; i++) {
        somaDP += (vetor[i] - media) * (vetor[i] - media);
    }
    DP = sqrt(somaDP / 10);
    printf("O desvio padrão é: %lf\n", DP);

}
