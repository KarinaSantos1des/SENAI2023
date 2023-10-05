#include <stdio.h>
#include <stdbool.h>

int main() {
    int N,i,j;
    
    while (1) {
        scanf("%d", &N);
        
        if (N == 0) {
            break;
        }
        
        bool doors[N+1];  // Usamos um vetor de booleanos para representar o estado das portas (0-indexed).
        
        // Inicialmente, todas as portas estão fechadas.
        for ( i = 1; i <= N; i++) {
            doors[i] = false;
        }
        
        // Simulação do processo de abertura e fechamento das portas pelos descendentes.
        for ( i = 1; i <= N; i++) {
            for ( j = i; j <= N; j += i) {
                doors[j] = !doors[j];  // Troca o estado da porta.
            }
        }
        
        // Imprime o número das portas que estão abertas.
        bool first = true;
        for ( i = 1; i <= N; i++) {
            if (doors[i]) {
                if (!first) {
                    printf(" ");
                }
                printf("%d", i);
                first = false;
            }
        }
        printf("\n");
    }
    
    return 0;
}
