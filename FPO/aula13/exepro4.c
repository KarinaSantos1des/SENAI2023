#include <stdio.h>

int main() {
    FILE *input = fopen("esquerda.in.txt", "r");
    FILE *output = fopen("esquerda.out.txt", "w");

    while (1) {
        int N;
        fscanf(input, "%d", &N);
        

        if (N == 0) break;

        char comandos[N];
        fscanf(input, "%s", comandos);

        int direcao = 0;  // 0 para norte, 1 para leste, 2 para sul, 3 para oeste
		int i;
        for (i = 0; i < N; i++) {
            if (comandos[i] == 'E') {
                direcao = (direcao + 3) % 4;  // Virar à esquerda (girar 270 graus no sentido horário)
            } else {
                direcao = (direcao + 1) % 4;  // Virar à direita (girar 90 graus no sentido horário)
            }
        }

        char resultado;
        switch (direcao) {
            case 0:
                resultado = 'N';
                break;
            case 1:
                resultado = 'L';
                break;
            case 2:
                resultado = 'S';
                break;
            case 3:
                resultado = 'O';
                break;
        }

        fprintf(output, "%c\n", resultado);
    }

    fclose(input);
    fclose(output);

    return 0;
}
