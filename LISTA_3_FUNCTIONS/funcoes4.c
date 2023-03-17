#include <stdio.h>
#include <locale.h>

void notas(float nota1, float nota2, float nota3, char tipo);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3;
	char tipo;
	
	printf("Informe o tipo de média: \n");
	scanf("%c", &tipo);
	
	printf("Digite a 1ª nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a 2ª nota: \n");
	scanf("%f", &nota2);
	
	printf("Digite a 3ª nota: \n");
	scanf("%f", &nota3);
	
	notas(nota1, nota2, nota3, tipo);
}

void notas(float nota1, float nota2, float nota3, char tipo) {
	float mediaA = (nota1 + nota2 + nota3) / 3, mediaP = ((nota1 * 3) + (nota2 * 5) + (nota3 * 2)) / 10;
	if (tipo == 'a') {
		printf("A média aritmética é: %.2f", mediaA);
	} else if (tipo == 'p') {
		printf("A média ponderada é: %.2f", mediaP);
	}
}
