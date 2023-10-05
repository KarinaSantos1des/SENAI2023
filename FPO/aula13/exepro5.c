#include <stdio.h>

int main() {
    int N, F, volume_por_amigo;
    FILE *input_file = fopen("suco.in.txt", "r");
    FILE *output_file = fopen("suco.out.txt", "w");
    
    printf("Digite a quantidade de amigos:\n");
    scanf("%d",&N);
    printf("Digite a quantidade de frutas:\n");
    sacnf("%d",&F);    

    while (1) {
        fscanf(input_file, "%d %d", &N, &F);

        if (N == 0 && F == 0) {
            break;  // Condição de saída
        }

        volume_por_amigo = (F * 50 / N)/1000;  // Cálculo do volume em litros
        scanf("%d", &volume_por_amigo);  // Escreve o resultado no arquivo de saída
        printf("Cada um poderá tomar %d:", volume por amigo);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
