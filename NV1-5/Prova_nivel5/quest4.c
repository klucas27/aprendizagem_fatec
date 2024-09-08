/*Difícil: Escreva um programa que leia um 
número inteiro positivo e exiba todos os seus divisores.*/


#include <stdio.h>

int main(){

    int num;
    int retira = 1;

    printf(">> ");
    scanf("%d", &num);

    while (retira <= num){
        if (num % retira == 0){
            printf("\n%d",retira);
        };

        retira ++;
    }

    return 0;
}