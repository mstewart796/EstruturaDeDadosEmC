// Faça um programa para ler a nota da prova de 10 alunos e armazene num vetor, calcule 
// e imprima a média geral (considere a média aritmética)

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

    int vetor[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Informe a %dª nota: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    double media = (double) soma / 10;
    printf("A media foi: %.2f", media);
}
