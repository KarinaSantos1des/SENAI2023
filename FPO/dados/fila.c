#include <stdio.h>
#define SIZE 10

int fila[SIZE];
int inicio = 0;
int fim = 0;
int i;

void mostraFila() {
    printf("Fila:\n");
    for ( i = inicio; i < fim; i++) {
        printf("%d\n", fila[i]);
    }
}

int enfileirar(int dado) {
    if (fim < SIZE) {
        fila[fim] = dado;
        fim++;
        return 1;
    } else {
        return 0; // Fila cheia
    }
}

int desenfileirar() {
    if (inicio < fim) {
        inicio++;
        return 1;
    } else {
        return 0; // Fila vazia
    }
}

int main() {
    enfileirar(25);
    mostraFila();
    enfileirar(18);
    mostraFila();
    enfileirar(10);
    mostraFila();
    desenfileirar();
    mostraFila();
    desenfileirar();
    mostraFila();
    
    return 0;
}
//na fila quem sai é o primeiro
