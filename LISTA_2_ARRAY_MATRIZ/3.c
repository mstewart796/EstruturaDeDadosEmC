 // Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

 #include <stdio.h>

 void main() {
    
    int vetor[10], counter = 0;
    for (int i = 0; i < 10; i++) {
        printf("Informe o %dº numero: ", i);
        scanf("%d", &vetor[i]);
        if (i % 2 == 0) {
            counter++;
        }
    }
    printf("O seu vetor tem %d valores pares", counter);
 }
