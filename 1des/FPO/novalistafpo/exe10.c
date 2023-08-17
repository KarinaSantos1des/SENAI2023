#include <stdio.h>

int main(void){
	int nota1, nota2, nota3, media;
	
	printf("Por favor, digite as notas do aluno: ");
	scanf("%d" "%d" "%d", &a, &b, &c);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if(media >= 6){
		printf("Aprovado");
		return 0;
	}else if(media < 6 && media >= 4){
		printf("Recuperacao");
		return 0;
	}else{
		printf("Reprovado");
		return 0;
	}
	
	return 0;
}
