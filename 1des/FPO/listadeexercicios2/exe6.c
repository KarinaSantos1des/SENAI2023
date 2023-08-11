#include <stdio.h>
		int main (){
			int distancia = 0;
			float tempo = 0;
			printf ("Digite a distancia a ser percorrida pelo aviao:\n");
			scanf ("%d", &distancia);
			tempo = (distancia * 1000)/(900 * 3.6) * 3600;
			printf (" o tempo gasto sera de : (distancia * 1000) / ( 900 * 3.6) * 3600 = 0.2%f", tempo);					
				
				return 0;
	}
