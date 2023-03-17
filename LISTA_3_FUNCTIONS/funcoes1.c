#include <stdio.h>
#include <locale.h>

void notas(float n1, float n2, float n3, float n4, float n5);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, n5;
	
	printf("Informe a 1� nota: \n");
	scanf("%f", &n1);
	
	printf("Informe a 2� nota: \n");
	scanf("%f", &n2);
	
	printf("Informe a 3� nota: \n");
	scanf("%f", &n3);
	
	printf("Informe a 4� nota: \n");
	scanf("%f", &n4);
	
	printf("Informe a 5� nota: \n");
	scanf("%f", &n5);
	
	notas(n1, n2, n3, n4, n5);
}

void notas(float n1, float n2, float n3, float n4, float n5) {
	
	float media = (n1 + n2 + n3 + n4 +n5) /5;
	
	printf("A m�dia �: %.2f", media);
}
