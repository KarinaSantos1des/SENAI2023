#include <stdio.h>

int main(void){
	int n1, n2;
	
	printf("digite dois numeros para ser comparados:\n ");
	scanf("%d" "%d", &n1, &n2);
	
	if(n1 > n2){
		printf("O maior numero e %d e o menor %d", n1, n2);
	}else if( n1 < n2){
		printf("O maior numero e %d e o menor %d", n2, n1);
	}else {
		printf("Os numeros sao iguais");
	}
	return 0;
}
