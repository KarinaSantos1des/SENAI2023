#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[50];
	float peso, altura, imc;
	int decisao = 1;
	
	while (decisao){
				
	printf("Digite o nome do paciente: \n");
	scanf("%s", &nome);
	printf ("digite o peso do paciente em kg:\n");
	scanf ("%f", &peso);
	printf ("Digite a altura do paciente em metros :\n");
	scanf ("%f", &altura);
	
	imc = peso/(altura*altura);
	
	printf( "O imc do paciente é igual a : peso/(altura*altura) %.2f\n", imc);
	
	if(imc < 18.5){
		printf("Abaixo do peso ideal");
	}else if(imc < 30){
		printf ("Peso ideal");
	} else if(imc < 35  ){
		printf(" Obesidade");
	}else{
		printf("Gordinho\n");
	}
	printf("Deseja continuar?\n Digite 1 para continuar e 0 para sair: \n");
	scanf("%d", &decisao);
	}
	return 0;
}
	
	
	
