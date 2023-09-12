#include <stdio.h>

int main() {
    int vetor1[5];
    int vetor2[5];
    int resultado[5];
    int i;
    
    printf("Digite 5 valores inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 valores inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 5; i++) {
        resultado[i] = vetor1[i] + vetor2[4 - i];
    }

    printf("Resultado da soma do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
