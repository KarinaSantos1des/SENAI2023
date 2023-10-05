#include <stdio.h>

int main() {
    FILE *entrada, *saida;
    char nome[100];
    float nota, media;
    
    // Abra o arquivo de entrada "arquivo.txt" para leitura
    entrada = fopen("arquivo.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }
    
    // Abra o arquivo de sa�da "resultados.txt" para escrita
    saida = fopen("resultados.txt", "w");
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de sa�da.\n");
        fclose(entrada);
        return 1;
    }
    
    // Processar as notas e calcular a m�dia para cada aluno
    while (fscanf(entrada, "%s %f", nome, &nota) == 2) {
        media = nota;
        fprintf(saida, "%s ", nome);
        
        // Calcular a m�dia
        if (media >= 5.0) {
            fprintf(saida, "Aprovado\n");
        } else {
            fprintf(saida, "Reprovado\n");
        }
    }
    
    // Feche os arquivos
    fclose(entrada);
    fclose(saida);
    
    printf("Processamento conclu�do. Resultados salvos em 'resultados.txt'.\n");
    
    return 0;
}













