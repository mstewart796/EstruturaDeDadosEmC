#include <stdio.h>
#include <locale.h>

void menor(int x, int y);

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	int x, y;
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &x);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &y);
	
	menor(x, y);
}

void menor(int x, int y) {
	
	int menor;
	if (x < y) {
		menor = x;
	} else {
		menor = y;
	}
	printf("O menor foi %d", menor);	
}
