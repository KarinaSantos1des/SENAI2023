#include <stdio.h>
int main(){
	int a , b , c , x;
	printf ("digite tres numeros inteiros separados por espa�o:");
	scanf ("%d %d %d", &a, &b, &c);
	x = (a + b) / c;
	printf ("%d\na = %d\nb = %d\nc = %d\n", a, b, c);
	printf (" O resultado da express�o (a + b) / c = %d", x);
	return 0;
	
}
