// Escreva um programa que leia 10 n�meros inteiros e os armazene em um vetor. Calcule o 
// desvio padr�o e imprima na tela o resultado. 
 
// O desvio padr�o (DP) � calculado usando-se a seguinte f�rmula: 
 
// Sendo, 
// ?: s�mbolo de somat�rio. Indica que temos que somar todos os termos, desde 
// a primeira posi��o (i=1) at� a posi��o n 
// xi: valor na posi��o i no conjunto de dados 
// MA: m�dia aritm�tica dos dados 
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
