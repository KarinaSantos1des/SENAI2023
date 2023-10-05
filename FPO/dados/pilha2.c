
int pilha[] = {21,44,35,18,8,10};
int i;
void mostraPilha(){
	printf("pilha:\n");
	for (i=6; i>0; i--)
		printf("%d\n",pilha[i]);
}
int main(){
	mostraPilha();
}
