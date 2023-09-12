#include <stdio.h>
#include <locale.h>
#include <string.h>
int main (){
	setlocale (LC_ALL,"");
	char cidade[20], nome[20], status [10];
	int candidatos, votos, brancos, nulos, total, percentual;	
	int varios = 10;
	 	
	 	printf ("Digite o nome da Cidade a ser realizada a eleição:\n");
		scanf ("%s", &cidade);
		printf ("Quantos candidatos vão concorrer a estas eleições?\n");
		scanf ("%d", &candidatos);	
		printf ("Quantos votos em branco foram computados?\n");
		scanf ("%d", &brancos);
		printf("Quantos votos nulos foram computados?\n");
		scanf ("%d", &nulos);
		
		while (varios){
		
		printf ("Digite o nome do candidato:\n");
		scanf("%s",&nome);
		printf("Digite quantos votos ele recebeu:\n");
		scanf("%d",&votos);
		
		if (votos + brancos >= nulos){
			strcpy(status, "válido");		
		}else{
			strcpy(status, "invalido");
		}		
		printf("Nome\tStatus:\n");
		printf("%s\n",status);
		}
		
		total = votos + brancos;
		percentual = votos * 100 / total;
		printf (" O candidato recebeu %d % dos votos", percentual);	
					
		return 0;
		}
		
	
