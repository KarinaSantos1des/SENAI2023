#include <stdio.h>

int main() {
    int N , i;

    // Abra o arquivo de entrada
    FILE *inputFile = fopen("portas.in.txt", "r");
    if (inputFile == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    // Abra o arquivo de saída
    FILE *outputFile = fopen("portas.out.txt", "w");
    if (outputFile == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        fclose(inputFile);
        return 1;
    }

    while (1) {
        // Leia o valor de N
        fscanf(inputFile, "%d", &N);

        // Verifique se chegamos ao final da entrada
        if (N == 0) {
            break;
        }

        // Lógica para encontrar as portas abertas
        for ( i = 1; i <= N; i++) {
            if (N % i == 0) {
                fprintf(outputFile, "%d ", i);
            }
        }
        fprintf(outputFile, "\n");
    }

    // Feche os arquivos
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}


