#include <stdio.h>

int main(void){
	int x, y;
	
	printf("Digite dois numeros inteiros:\n ");
	scanf("%d" "%d", &x, &y);
	
	if(y < x){
		for(y = y; y <= x; y++){
			printf("%d\n", y);
		}
	}else if(x < y){
		for(x = x; x <= y; x++){
			printf("%d\n", x);
		}
	}
	return 0;
}
