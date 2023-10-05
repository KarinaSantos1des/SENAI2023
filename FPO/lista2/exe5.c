#include <stdio.h>

int main(void){
	float preco;
	char item[10];
	
	printf("Insira o nome do item:\n ");
	scanf("%s", &item);
	
	printf("Insira o preco do item :\n");
	scanf("%f", &preco);
	
		if(preco < 1000){
		preco = (0.05 * preco) + preco;
		printf("O novo preco e de : (0.5*preco) + preco %.2f ",  preco);
		
	} else {
		preco = (preco * 0.07) + preco;
		printf("O novo preco e de: (preco * 0.07) + preco %.2f ", preco);
	}
	
	
	return 0;
}
