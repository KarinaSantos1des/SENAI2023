#include <stdio.h>

int main(){
    int vetor[6];
    int i, temp;

    printf("Digite 6 numeros inteiros separados por espacos:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 3; i++) {
        temp = vetor[i];
        vetor[i] = vetor[5 - i];
        vetor[5 - i] = temp;
    }

    printf("\nVetor com os valores trocados de maneira inversa:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
