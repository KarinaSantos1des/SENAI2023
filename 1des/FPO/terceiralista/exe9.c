#include <stdio.h>

int main(){
	int num, i;
	
	printf("Digite um numero inteiro e maior que zero para obter sua tabuada:\n");
	scanf("%d", &num);
	
	for(i = 0; i <= 10; i++){
		printf("%dX%d = %d\n", num, i, num * i);
	}
	
	
	return 0;
}
