#include <stdio.h>
#include <string.h>

int main(){
    
    char cidades[5][50];
    int eleitores[5];
    int votos[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome da cidade %d:", i + 1);
        scanf("%s", cidades[i]);
        printf("Digite o numero total de eleitores da cidade %d:", i + 1);
        scanf("%d", &eleitores[i]);
        printf("Digite o total de votos apurados na ultima eleicao na cidade %d:", i + 1);
        scanf("%d", &votos[i]);
    }

    printf("\nPorcentagem de Participacao dos Eleitores:\n");
    for (i = 0; i < 5; i++) {
        float participacao = ((float)votos[i] / eleitores[i]) * 100;
        printf("Cidade: %s - Participacao: %.2f%%\n", cidades[i], participacao);
    }

    return 0;
}
