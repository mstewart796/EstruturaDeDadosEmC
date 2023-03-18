// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Calcule o 
// desvio padrão e imprima na tela o resultado. 
 
// O desvio padrão (DP) é calculado usando-se a seguinte fórmula: 
 
// Sendo, 
// ?: símbolo de somatório. Indica que temos que somar todos os termos, desde 
// a primeira posição (i=1) até a posição n 
// xi: valor na posição i no conjunto de dados 
// MA: média aritmética dos dados 
// n: quantidade de dados 

#include <stdio.h>
#include <locale.h>
// #include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
    // setlocale(LC_ALL, "pt_PT.UTF-8");
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        printf("Informe o %d? n?mero: ", i);
        scanf("%d", &vetor[i]);
    }
}
