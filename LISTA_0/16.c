// Leia a idade e o tempo de serviço de um trabalhador e escreva se ele
// pode ou não se aposentar. As condições para aposentadoria são:
// - Ter pelo menos 65 anos,
// - Ou ter trabalhado pelo menos 30 anos,
// - Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

    int idade, tempoDS;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("Informe o seu tempo de servico: ");
    scanf("%d", &tempoDS);

    if (idade >= 65 || tempoDS >= 30) {
        printf("Pode aposentar");
    } else if (idade >= 60 && tempoDS >= 25) {
        printf("Pode aposentar");
    } else {
        printf("Nao pode aposentar");
    }
}
