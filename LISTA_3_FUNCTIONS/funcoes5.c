#include <stdio.h>
#include <locale.h>


void pa(float x, float y);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	float x, y;
	
	printf("Informe a 1� dimens�o: ");
	scanf("%f", &x);
	
	printf("Informe a 2� dimens�o: ");
	scanf("%f", &y);
	
	pa(x, y);
}

void pa(float x, float y) {
	
	float p = 2 * (x + y);
	float area = x * y;
	
	printf("O per�metro � %.2f e a �rea � %.2f", p, area);
}
