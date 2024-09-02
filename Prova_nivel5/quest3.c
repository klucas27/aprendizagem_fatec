/*Médio: Escreva um programa que leia 10 
números inteiros e exiba quantos deles são pares e quantos são ímpares.*/

#include <stdio.h>

int main(){

    int numeros[10];
    int novo_numero = 0;
    int tt_par = 0;
    int tt_impar = 0;

    for (int i = 0; i < 10; i++){
        
        printf("informe o numero %d: ", i+1);
        scanf("%d", &novo_numero);
        
        numeros[i] = novo_numero;

        //printf("\n%d", numeros[i]);
    };

    // printf(type(novo_numero));
    
    for (int i = 0; i < 10; i++){

        if (numeros[i] % 2 == 0)
        {
            tt_par +=1;
        }        
        else 
        {
            tt_impar +=1;
        };

    };
    
    printf("Contem %d Pares e %d Impar.", tt_par, tt_impar);

    return 0;
}