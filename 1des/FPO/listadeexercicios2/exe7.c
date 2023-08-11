#include<stdio.h>
int main(){
	int caminhoes, alqueires, viagens;
	printf ("digite quantos alqueires possui a fazenda de laranjas:\n");
	scanf ("%d", &alqueires);
	printf ("digite quantos caminhoes estao disponiveis:\n");
	scanf ("%d", &caminhoes);
	viagens = (alqueires * 250) / (caminhoes * 18);
	printf (" As viagens a ser feitas sera: (alqueires * 250) / (caminhoes * 18) = %d", viagens);
	
	return 0;
}
