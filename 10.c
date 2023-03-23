// Faça um programa para corrigir uma prova com 5 questões de múltipla escolha (a, b, 
// c, d ou e), em uma turma com 3 alunos. Cada questão vale 2 pontos. O programa deve ler 
// primeiro o gabarito e depois corrigir as provas dos 3 alunos. Para isto deve registrar o nome de 
// cada aluno para no fim imprimir a nota final de acordo com cada aluno. 

// Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char gabarito[5];
    int notaA1 = 0, notaA2 = 0, notaA3 = 0; 
    char respostas[3][5];
    char aluno1[20], aluno2[20], aluno3[20];

    printf("--------\n");
    printf("GABARITO\n");
    printf("--------\n");
    for (int i = 0; i < 5; i++) {
        printf("Informe a %dª resposta: \n", i + 1);
        scanf("%s", &gabarito[i]);

    }
    
    printf("-------\n");
    printf("ALUNO 1\n");
    printf("-------\n");
    printf("Informe o seu nome: \n");
    scanf("%s", aluno1);
    
    for (int j = 0; j < 5; j++) {
        printf("Informe a sua %dª resposta: \n", j + 1);
        scanf("%s", &respostas[0][j]);
        if (respostas[0][j] == gabarito[j]) notaA1 += 2;
    }

    printf("-------\n");
    printf("ALUNO 2\n");
    printf("-------\n");
    printf("Informe o seu nome: \n");
    scanf("%s", aluno2);
    
    for (int j = 0; j < 5; j++) {
        printf("Informe a sua %dª resposta: \n", j + 1);
        scanf("%s", &respostas[1][j]);
        if (respostas[1][j] == gabarito[j]) notaA2 += 2;
    }

    printf("-------\n");
    printf("ALUNO 3\n");
    printf("-------\n");
    printf("Informe o seu nome: \n");
    scanf("%s", aluno3);
    
    for (int j = 0; j < 5; j++) {
        printf("Informe a sua %dª resposta: \n", j + 1);
        scanf("%s", &respostas[2][j]);
        if (respostas[2][j] == gabarito[j]) notaA3 += 2;
    }
    
    printf("A nota final de %s é: %d\n", aluno1, notaA1);
    printf("A nota final de %s é: %d\n", aluno2, notaA2);
    printf("A nota final de %s é: %d\n", aluno3, notaA3);

}
