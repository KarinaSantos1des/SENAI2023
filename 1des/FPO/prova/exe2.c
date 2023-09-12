#include <stdio.h>
#include <locale.h>
#include <string.h>
int main (){
	setlocale (LC_ALL,"");
	char cidade[15], status [10], candidato1, candidato2, candidato3, candidato4, candidato5;
	int can, votos1, votos2, votos3, votos4, votos5, branco, nulo, total;
	int tpercentual1 ;
	
		printf ("Digite o nome da Cidade:\n");
		scanf ("%s", &cidade);
		printf ("Quantos canditados estão concorrendo a esta eleição?\n");
		scanf ("%d", &can);	
		printf("digite o nome do candidato numero 1 :\n");
		scanf ("%s", &candidato1);
		printf ("digite quantos votos este candidato recebeu:\n");
		scanf ("%d", &votos1);
		printf("digite o nome do candidato numero 2 :\n");
		scanf ("%s", &candidato2);
		printf ("digite quantos votos este candidato recebeu:\n");
		scanf ("%d", &votos2);
		printf("digite o nome do candidato numero 3 :\n");
		scanf ("%s", &candidato3);
		printf ("digite quantos votos este candidato recebeu:\n");
		scanf ("%d", &votos3);
		printf("digite o nome do candidato numero 4 :\n");
		scanf ("%s", &candidato4);
		printf ("digite quantos votos este candidato recebeu:\n");
		scanf ("%d", &votos4);
		printf("digite o nome do candidato numero 5 :\n");
		scanf ("%s", &candidato5);
		printf ("digite quantos votos este candidato recebeu:\n");
		scanf ("%d", &votos5);		
		printf("digite o total de votos em branco:\n");
		scanf ("%d",&branco);
		printf("digite o total de votos nulos:\n");
		scanf ("%d", &nulo);
		
		total =  votos1 + votos2 + votos3 + votos4 + votos5 + branco;		
		printf("O numero total de votos válidos é de votos1 + votos2 + votos3 + votos4 + votos5 é de %d:\n",total);
		tpercentual1 = votos1 * 100 / total;
		printf("O candidato %s,", candidato1);
		printf ("recebeu o total percentual de %d,", tpercentual1);
		
		if ( total >= nulo){
			printf (" Eleição válida");
		}else {
			printf (" Eleição não válida");
		}
							
		return 0;
		}
		
		
