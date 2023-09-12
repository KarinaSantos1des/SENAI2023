#include <stdio.h>

int main(){
	int num, fat;
	
	printf("Digite um numero positivo e maior que zero:\n");
	scanf("%d", &num);
	
	for(fat = 1; num > 1; num = num - 1)
	{fat = fat * num;
		}	
		
	
	printf("%d\n", fat);
	return 0;
}
