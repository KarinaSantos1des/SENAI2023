#include <stdio.h>
int main (){
	char time [50] = "";
	int vitorias = 0;
	int empates = 0;
	int pontos = 0; 	 
	printf ("Digite o nome do time de futebol:\n");
	scanf ("%s",time);
	printf ("Digite o n�mero de vit�rias :\n");
	scanf ("%d", &vitorias);
	printf ("Digite o numero de empates:\n");
	scanf ("%d", &empates);
	pontos = (vitorias * 3) + (empates * 1);
	printf ( "A pontuacao do time � :  (vitorias * 3) + (empates * 1) = %d", pontos);
		
	return 0;
}
