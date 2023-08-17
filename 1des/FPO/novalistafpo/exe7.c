#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5;
    int res;
    
    printf("Digite cinco numeros separados por espacos:\n ");
    scanf("%d %d %d %d %d" ,&num1, &num2, &num3, &num4, &num5);

    if(num1 > num2){
        res = num1;
        num1 = num2;
        num2 = res;
    }
    if(num2 > num3){
        res = num2;
        num2 = num3;
        num3 = res;
    }
    if(num3 > num4){
        res = num3;
        num3 = num4;
        num4 = res;
    }
    if(num4 > num5){
        res = num4;
        num4 = num5;
        num5 = res;
    }
    
    
    
    if(num1 > num2){
        res = num1;
        num1 = num2;
        num2 = res;
    }
    if(num2 > num3){
        res = num2;
        num2 = num3;
        num3 = res;
    }
    if(num3 > num4){
        res = num3;
        num3 = num4;
        num4 = res;
    }
    if(num1 > num2){
        res = num1;
        num1 = num2;
        num2 = res;
    }
    if(num2 > num3){
        res = num2;
        num2 = num3;
        num3 = res;
    }
    if(num1 > num2){
        res = num1;
        num1 = num2;
        num2 = res;
    }

    printf("Numeros em ordem crescente:");
    printf("\n%d\n%d\n%d\n%d\n%d\n", num1, num2, num3, num4, num5);

    return 0;
}
