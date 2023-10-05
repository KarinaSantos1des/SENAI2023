#include <stdio.h>

int main(void){
	int a, b, c;
	
	printf("Digite a medida do primeiro lado do triangulo:\n ");
	scanf("%d", &a);
	
	printf("Digite a medida do segundo lado do triangulo: \n");
	scanf("%d", &b);
	
	printf("Digite a medida do terceiro lado do triangulo: \n");
	scanf("%d", &c);
	
	if(a == b && a == c){
		printf("Equilatero");
	} else if(a == b || a == c) {
		printf("Isosceles");
	} else {
		printf("Escaleno");
	}
	return 0;
}
