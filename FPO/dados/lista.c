#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void mostraFila() {
    struct Node* current = front;
    printf("Fila:\n");
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void enfileirar(int dado) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = dado;
    newNode->next = NULL;

    if (rear == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int desenfileirar() {
    if (front == NULL) {
        return 0; // Fila vazia
    } else {
        struct Node* temp = front;
        front = front->next;
        free(temp);
        return 1;
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
