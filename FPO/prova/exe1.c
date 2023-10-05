#include <stdio.h>
#include <locale.h>
#include <string.h>
int main (){
	setlocale (LC_ALL,"");
	char nome[50], status[6];
	int idade, dias, pessoas, sexo, i, resultado;
	int varios = 5;
	
		printf ("Quantas pessoas estão dispostas a doar sangue?\n");
		scanf ("%d", &pessoas);	
		
		while (varios){
		
		printf ("Digite o nome da pessoa:\n");
		scanf("%s",&nome);
		printf("Digite a idade:\n");
		scanf("%d",&idade);
		printf("digite 1 para homem e 2 para mulher\n");
		scanf("%d",&sexo);
		printf("digite quantos dias se passaram desde a ultima doação:\n");
		scanf("%d", &dias);
		
		if (sexo = 1 && idade >= 16 && idade <= 69 && dias > 90){
			strcpy(status, "apto");	
		}else if(sexo = 2 && idade >=16 && idade <= 69 && dias > 60){
			strcpy(status,"apto");
		}else{
			strcpy(status, "inapto");
		}		
		printf("Nome\tStatus:\n");
		printf("%s\t%s\n",nome,status);
		}
		
		printf(" Insira o nome da próxima pessoa:\n");	
					
		return 0;
		}
		
	
