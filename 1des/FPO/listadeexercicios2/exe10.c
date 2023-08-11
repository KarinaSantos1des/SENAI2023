#include<stdio.h>
int main(){
	char cidade [50] = "";
	int eleitores, votos;
	float participacao; 
	printf ("digite o nome da cidade:\n");
	scanf ("%s", cidade);
	printf ("digite quantos eleitores habitam na cidade:\n");
	scanf ("%d", &eleitores);
	printf ("digite o numero de votos apurados:\n");
	scanf ("%d", &votos);
	participacao = votos / eleitores  * 100 ;
	printf (" A participacao foi de : votos / eleitores * 100  = %f", participacao);	
	return 0;
}
