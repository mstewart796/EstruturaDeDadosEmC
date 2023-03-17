#include <stdio.h>
#include <locale.h>

void notas(float nota1, float nota2, float nota3, char tipo);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3;
	char tipo;
	
	printf("Informe o tipo de m�dia: \n");
	scanf("%c", &tipo);
	
	printf("Digite a 1� nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a 2� nota: \n");
	scanf("%f", &nota2);
	
	printf("Digite a 3� nota: \n");
	scanf("%f", &nota3);
	
	notas(nota1, nota2, nota3, tipo);
}

void notas(float nota1, float nota2, float nota3, char tipo) {
	float mediaA = (nota1 + nota2 + nota3) / 3, mediaP = ((nota1 * 3) + (nota2 * 5) + (nota3 * 2)) / 10;
	if (tipo == 'a') {
		printf("A m�dia aritm�tica �: %.2f", mediaA);
	} else if (tipo == 'p') {
		printf("A m�dia ponderada �: %.2f", mediaP);
	}
}
