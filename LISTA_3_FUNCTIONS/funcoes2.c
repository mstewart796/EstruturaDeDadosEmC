#include <stdio.h>
#include <locale.h>
#define PI 3.14

void da (float r);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	float r;
	printf("Informe o valor do raio: ");
	scanf("%f", &r);
	da(r);
}

void da (float r) {
	
	float d = r * 2;
	float a = PI * r * r;
	
	printf("O di�metro � %.2f e a �rea � %.2f", d, a);
	
	
}
