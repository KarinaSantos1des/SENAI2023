#include <stdio.h>
	#define texto "Entrada e saida de dados."
	int main (){
		printf("%s\n",texto);
		char nome [200] = "";		
		float salario, novo = 0.0;
		int reajuste = 0;
			printf ("digite o nome do funcionario:\n");
			scanf ("%s", nome);
			printf ("digite o salario atual:\n");
			scanf ("%f",&salario);
			printf ("digite o reajuste a ser feito:\n");
			scanf ("%d",&reajuste);
		 	novo =	(salario * reajuste/100)+salario;
		 	printf ("O valor do novo salario sera: (salario * reajuste/100) + salario = %f" , novo);
						
		return 0;
	}
