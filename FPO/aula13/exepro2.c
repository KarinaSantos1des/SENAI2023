
#include <stdio.h>

int main() {
    // Abrir o arquivo de entrada "dados.txt" para leitura
    FILE *arquivoEntrada = fopen("dados.txt", "r");
    
    // Verificar se o arquivo foi aberto com sucesso
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1; // Encerrar o programa com erro
    }
    
    // Inicializar vari�veis para a soma e contagem dos n�meros
    double soma = 0.0;
    int contagem = 0;
    
    // Ler e mostrar o conte�do do arquivo
    printf("Conte�do do arquivo dados.txt:\n");
    while (!feof(arquivoEntrada)) {
        double numero;
        // Tentar ler um n�mero do arquivo
        if (fscanf(arquivoEntrada, "%lf", &numero) == 1) {
            printf("%.lf\n", numero);
            soma += numero;
            contagem++;
        }
    }
    
    // Fechar o arquivo de entrada
    fclose(arquivoEntrada);
    
    // Calcular a m�dia dos n�meros
    double media = (contagem > 0) ? (soma / contagem) : 0.0;
    
    // Abrir o arquivo de sa�da "resultado.txt" para escrita
    FILE *arquivoSaida = fopen("resultado.txt", "w");
    
    // Verificar se o arquivo foi aberto com sucesso
    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de sa�da.\n");
        return 1; // Encerrar o programa com erro
    }
    
    // Escrever a m�dia no arquivo de sa�da
    fprintf(arquivoSaida, "M�dia dos n�meros: %.2lf\n", media);
    
    // Fechar o arquivo de sa�da
    fclose(arquivoSaida);
    
    printf("M�dia dos n�meros: %.2lf\n", media);
    
    return 0; // Encerrar o programa com sucesso
}
