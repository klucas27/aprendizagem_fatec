#include<stdio.h>


int calcula(int base, int exp){

    // int base, exp, valor=1;
    int valor = 1;

    if (base == 0 && exp == 0){
        printf("\nError\n");
        return 0;
    }
    
    if (exp == 0){
        printf("\n->>> 1\n");
        return;
    }

    for (int i = 0; i < exp; i++){
        valor = valor * base;

    }

    printf("\n->>> %d\n", valor);

    return 0;
}

int main(void){

    int base, exp;

    printf("Base: "); scanf("%d", &base);
    printf("Expoente: "); scanf("%d", &exp);

    calcula(base, exp);

    return 0;

}