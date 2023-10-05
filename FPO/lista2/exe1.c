#include <stdio.h>

int main(void){
	float valor;
	
	printf("Digite o valor do produto: \n");
	scanf("%f", &valor);
	
	if(valor > 1000){
		valor = valor * 0.92;
		printf("O valor do produto com desconto de 8%% e de R$%.2f", valor);
	} else{
		printf("O valor continua o mesmo.");
	}
	return 0;
}
