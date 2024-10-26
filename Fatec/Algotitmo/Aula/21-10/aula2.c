#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    int dado1, dado2, soma = 0;
    for (int i = 1; i <= 100; i++){

        dado1 = 1+rand()%6;
        dado2 = 1+rand()%6;

        if ((dado1 + dado2) == 10){
            soma += 1;
        }     

    }
    printf("%d", soma);
}