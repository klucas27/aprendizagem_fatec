#include <stdio.h>

int main(){
    /* Esta Função verifica se o primeiro numero é multiplo do segundo */

    int num1, num2;

    printf("\nInforme um numero: \n");
    scanf("%d", &num1);
    printf("\nInforme outro numero: \n");
    scanf("%d", &num2);
    
    if (num1 % num2 == 0){
        printf("O numero %d e multiplo de %d!", num1, num2);
    }
    else{
        printf("O numero %d nao e multiplo de %d!", num1, num2);
    }

    return 0;
}