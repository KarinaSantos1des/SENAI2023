#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero;
    int soma = 0;

    // Abre o arquivo para leitura
    arquivo = fopen("dados.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo 'dados.txt':\n");

    // Lê os números do arquivo e exibe na tela
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d ", numero);
        soma += numero;
    }
 	
	  fclose(arquivo);
      printf("\nSoma dos números: %d\n", soma);


    return 0;
}
