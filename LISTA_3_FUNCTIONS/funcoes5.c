#include <stdio.h>
#include <locale.h>


void pa(float x, float y);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	float x, y;
	
	printf("Informe a 1ª dimensão: ");
	scanf("%f", &x);
	
	printf("Informe a 2ª dimensão: ");
	scanf("%f", &y);
	
	pa(x, y);
}

void pa(float x, float y) {
	
	float p = 2 * (x + y);
	float area = x * y;
	
	printf("O perímetro é %.2f e a área é %.2f", p, area);
}
