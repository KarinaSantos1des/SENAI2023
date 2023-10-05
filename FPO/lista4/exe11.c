#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int vetor[10];
    int i, valor, posicao;

    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 101; 
    }

    printf("Digite um valor a ser localizado no vetor:");
    scanf("%d", &valor);

    posicao = -1; 
    for (i = 0; i < 10; i++) {
        if (vetor[i] == valor) {
            posicao = i; 
            break; 
        }
    }

    if (posicao != -1) {
        printf("O valor %d foi encontrado na posicao %d do vetor.\n", valor, posicao);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", valor);
    }

    return 0;
}
