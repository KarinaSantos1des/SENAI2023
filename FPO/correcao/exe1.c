#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	int total;
	printf("Digite o total de doadores:");
	scanf("%d",&total);
	char nome[total][15];
	int idade[total];
	char sexo[total];
	int dias[total];
	char status[total][7];
	int i = 0;
	printf("Nome, idade, sexo 'M' ou 'F', dias sem doar:\n");
	while(i < total){
		scanf("%s %d %c %d", &nome[i], &idade[i], &sexo[i], &dias[i]);
		strcpy(status[i],"Inapto");
		if(idade[i] >= 16 && idade[i] <= 69){
			if(sexo[i] == 'M' && dias[i] > 60)
				strcpy(status[i],"Apto");
			if(sexo[i] == 'F' && dias[i] > 90)
				strcpy(status[i],"Apto");
		}
		i++;
	}
	printf("Nome\tStatus\n");
	for(i = 0;i < total;i++){
		printf("%s\t%s\n", nome[i], status[i]);	
	}
	return 0;
}
