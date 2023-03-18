// A nota final de um estudante é calculada a partir de três notas atribuídas
// entre o intervalo de 0 até 10, respectivamente, a um trabalho de
// laboratório, a uma avaliação semestral e a um exame final. A média das
// três notas mencionadas anteriormente obedece aos pesos: Trabalho de
// Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o
// resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9),
// de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as
// verificações necessárias.

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

int lab, as, final, pesoLab = 2, pesoAS = 3, pesoFinal = 5;

printf("Informe a sua nota do laboratorio: ");
scanf("%d", &lab);

printf("Informe a sua nota da avaliacao semesetral: ");
scanf("%d", &as);

printf("Informe a sua nota do exame final: ");
scanf("%d", &final);

float notaFinal = ((lab * pesoLab) + (as * pesoAS) + (final * pesoFinal)) / 10;

if (notaFinal < 3) {
    printf("Reprovado");
} else if (notaFinal < 5) {
    printf("Recuperacao");
} else {
    printf("Aprovado");
}

}
