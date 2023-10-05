int main(){
    
    char nomes[5][50];
    float precos[5];
    int maisCara = 0; 
    int maisBarata = 0; 
    int i;
        
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da mercadoria %d:", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o preco da mercadoria %d:", i + 1);
        scanf("%f", &precos[i]);
        
        if (precos[i] > precos[maisCara]) {
            maisCara = i;
        }
        
        if (precos[i] < precos[maisBarata]) {
            maisBarata = i;
        }
    }

    printf("\nMercadoria mais cara:\n");
    printf("Nome: %s\n", nomes[maisCara]);
    printf("Preço: R$ %.2f\n", precos[maisCara]);

    printf("\nMercadoria mais barata:\n");
    printf("Nome: %s\n", nomes[maisBarata]);
    printf("Preço: R$ %.2f\n", precos[maisBarata]);

    return 0;
}
