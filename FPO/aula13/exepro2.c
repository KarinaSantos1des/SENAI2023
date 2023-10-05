
#include <stdio.h>

int main() {
    // Abrir o arquivo de entrada "dados.txt" para leitura
    FILE *arquivoEntrada = fopen("dados.txt", "r");
    
    // Verificar se o arquivo foi aberto com sucesso
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1; // Encerrar o programa com erro
    }
    
    // Inicializar variáveis para a soma e contagem dos números
    double soma = 0.0;
    int contagem = 0;
    
    // Ler e mostrar o conteúdo do arquivo
    printf("Conteúdo do arquivo dados.txt:\n");
    while (!feof(arquivoEntrada)) {
        double numero;
        // Tentar ler um número do arquivo
        if (fscanf(arquivoEntrada, "%lf", &numero) == 1) {
            printf("%.lf\n", numero);
            soma += numero;
            contagem++;
        }
    }
    
    // Fechar o arquivo de entrada
    fclose(arquivoEntrada);
    
    // Calcular a média dos números
    double media = (contagem > 0) ? (soma / contagem) : 0.0;
    
    // Abrir o arquivo de saída "resultado.txt" para escrita
    FILE *arquivoSaida = fopen("resultado.txt", "w");
    
    // Verificar se o arquivo foi aberto com sucesso
    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1; // Encerrar o programa com erro
    }
    
    // Escrever a média no arquivo de saída
    fprintf(arquivoSaida, "Média dos números: %.2lf\n", media);
    
    // Fechar o arquivo de saída
    fclose(arquivoSaida);
    
    printf("Média dos números: %.2lf\n", media);
    
    return 0; // Encerrar o programa com sucesso
}
