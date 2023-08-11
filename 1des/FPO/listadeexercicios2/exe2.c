#include <stdio.h>
int main(){
	int d, v, t;
	printf ("digite a distancia em km a ser percorrida por um veiculo:");
	scanf ("%d", &d);
	printf ("digite a velocidade media em km/h a ser considerada, e obtenha o tempo em horas a ser gasto:");
	scanf ("%d", &v);
	t = (d / v);
	printf (" o tempo que o veiculo levará será de: (d /v) = %d", t);
	
	return 0;
}
