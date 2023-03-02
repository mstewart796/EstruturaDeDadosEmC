//  Faça um programa que faça 5 perguntas para uma pessoa sobre um
// crime. As perguntas são:
// - "Telefonou para a vítima?"
// - "Esteve no local do crime?"
// - "Mora perto da vítima?"
// - "Devia para a vítima?"
// - "Já trabalhou com a vítima?"
// O programa deve no final emitir uma classificação sobre a participação da
// pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve
// ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como
// "Assassino". Caso contrário, ele será classificado como "Inocente".

#include <stdio.h>

void main() {

    int resposta1, resposta2, resposta3, resposta4, resposta5;

    printf("Digite 0 para nao e 1 para sim\n");
    printf("Telefonou para a vitima? ");
    scanf("%d", &resposta1);

    printf("Esteve no local do crime? ");
    scanf("%d", &resposta2);

    printf("Mora perto da vitima? ");
    scanf("%d", &resposta3);

    printf("Devia para a vitima? ");
    scanf("%d", &resposta4);

    printf("Ja trabalhou com a vitima? ");
    scanf("%d", &resposta5);

    int total = resposta1 + resposta2 + resposta3 + resposta4 + resposta5;

    if (total == 2) {
        printf("Suspeita");
    } else if (total == 3 || total ==4) {
        printf("Cumplice");
    } else if (total == 5) {
        printf("Assassino");
    } else {
        printf("Inocente");
    }

}