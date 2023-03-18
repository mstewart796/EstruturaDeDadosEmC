// Faça um programa que leia 2 notas de um aluno, verifique se as notas são
// válidas e exiba na tela a média destas notas. Uma nota válida deve ser,
// obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua
// um valor válido, este fato deve ser informado ao usuário e o programa
// termina.

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    
    int nota1, nota2;

    printf("Informe nota 1: ");
    scanf("%d", &nota1);

    if (nota1 < 0 || nota1 > 10) {
        printf("Erro, nota tem que ser maior ou igual a 1 e menor ou igual a 10");
        return 1;
    }

    printf("Informe nota 2: ");
    scanf("%d", &nota2);
    
    if (nota2 < 0 || nota2 > 10) {
        printf("Erro, nota tem que ser maior ou igual a 1 e menor ou igual a 10");
        return 1;
    }

    float media = (nota1 + nota2) / 2;

    printf("A sua media eh: %.2f", media);
    return 0;

}
