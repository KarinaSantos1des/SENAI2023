#include<stdio.h>
int main(){
	char nome [50] = "";
	float preco, aumento ;
	printf ("digite o nome da mercadoria:\n");
	scanf ("%s", nome);
	printf ("digite o preco atual da mercadoria:\n");
	scanf ("%f", &preco);
	aumento =  preco + (preco * 0.05) ;
	printf (" O novo preco sera: preco + (preco * 0.05)  = %f", aumento);	
	return 0;
}
