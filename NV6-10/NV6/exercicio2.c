#include<stdio.h>

void altera_valor(int *vlr){

    *vlr = 30;

}

int main(){

    int num1 = 10;

    printf("Valore de num1: %d", num1);

    altera_valor(&num1);

    printf("\nValores de num1 agora: %d", num1);

    return 0;
    
}