#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    float montante, capital=1000.0, taxa=10.0;

    for (int i; i<=10; i++){
        montante = capital*pow(1 + (taxa/100), i);
        printf("%.2f", montante);
    }

    return 0;
}