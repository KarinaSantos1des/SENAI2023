#include <stdio.h>

int main() {
    FILE *arquivo;
    char linha[100]; // Suponha que cada linha tenha no m�ximo 100 caracteres

    // Abra o arquivo para leitura
    arquivo = fopen("arquivo.txt", "r");

    // Verifique se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1; // Saia do programa com um c�digo de erro
    }

    // Leia o arquivo linha por linha
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        // Fa�a algo com a linha lida, por exemplo, imprima-a
        printf("%s", linha);
    }

    // Feche o arquivo ap�s a leitura
    fclose(arquivo);

    return 0;
} 







