#include <stdio.h>
#define size 6
int pilha[size]; 
int ponteiro = 0;
int i;
void mostraPilha(){
	printf("pilha:\n");
	for (i=0; i<size; i++)
		printf("%d\n",pilha[i]);
}
int push(int dado){
	pilha[ponteiro]=dado;
	ponteiro++;
	if (ponteiro<size)return 1;
	else	return 0;
}
int main(){
	push(25);
	push(32);
	push(16);
	push(13);
	
	mostraPilha();
}
