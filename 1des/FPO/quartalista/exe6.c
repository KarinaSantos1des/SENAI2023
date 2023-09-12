#include <stdio.h>
#include <string.h>

int main(){
    
    char nomes[10][50];
    float precos[10];
    float desconto, valorDesconto, precoFinal;
    int i;

    printf("Digite o valor percentual de desconto para todas as mercadorias:");
    scanf("%f", &desconto);
    printf("\n******************************************************************\n");

    for (i = 0; i < 10; i++) {
        printf("\nDigite o nome da mercadoria %d:", i + 1);
        scanf("%s", nomes[i]);
       
        printf("Digite o preco da mercadoria %d:", i + 1);
        scanf("%f", &precos[i]);
        valorDesconto = (desconto / 100) * precos[i];
        precoFinal = precos[i] - valorDesconto;
        printf("\nMercadoria %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Preço Original: R$ %.2f\n", precos[i]);
        printf("Valor do Desconto: R$ %.2f\n", valorDesconto);
        printf("Preço Final (com desconto): R$ %.2f\n", precoFinal);
        printf("\n******************************************************************\n");
    }

    return 0;
}
