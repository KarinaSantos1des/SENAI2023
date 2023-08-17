#include <stdio.h>

int main(void){
	int salario;
	int salarionovo;
	int salario3;
	int filhos;
	
	printf("Insira o valor do salario do funcionario:\n");
	scanf("%d", &salario);
	
	
	if(salario < 2000){
		printf("Qual o numero de filhos: \n");
		scanf("%d", &filhos);
		
		salarionovo = salario + (filhos * 45);
		
		printf("O novo salario deste funcionario sera de: salario + (filhos*45) = %d", salarionovo);
		return 0;
	}else {
		printf("O valor do salario nao sofreu alteracoes.");
		return 0;
	}
	
	return 0;
}
