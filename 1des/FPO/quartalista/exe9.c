#include <stdio.h>

int main(){
    int vetor[10];
    int somaPares = 0, somaImpares = 0;
    int totalPares = 0, totalImpares = 0;
    int i;
    float mediaPares, mediaImpares;

    printf("Digite 10 numeros inteiros separados por espaços:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            somaPares += vetor[i];
            totalPares++;
        } else {
            somaImpares += vetor[i];
            totalImpares++;
        }
    }

    mediaPares = (totalPares > 0) ? somaPares / totalPares : 0;
    mediaImpares = (totalImpares > 0) ? somaImpares / totalImpares : 0;

    printf("\nSoma e Media dos Numeros Pares:\n");
    printf("Soma: %d\n", somaPares);
    printf("Media: %.2f\n", mediaPares);

    printf("\nSoma e Media dos Numeros Impares:\n");
    printf("Soma: %d\n", somaImpares);
    printf("Média: %.2f\n", mediaImpares);

    printf("\nTotal de Numeros Pares: %d\n", totalPares);
    printf("Total de Numeros Impares: %d\n", totalImpares);

    return 0;
}
