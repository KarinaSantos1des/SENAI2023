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
            break;  // Condi��o de sa�da
        }

        volume_por_amigo = (F * 50 / N)/1000;  // C�lculo do volume em litros
        scanf("%d", &volume_por_amigo);  // Escreve o resultado no arquivo de sa�da
        printf("Cada um poder� tomar %d:", volume por amigo);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
