#include<stdio.h>

int main(void){

    int idade;
    int adultos = 0;

    for (int x = 1; x <= 10; x++){
        printf("Informe a idade: ");
        scanf("%d", &idade);
        
        while (idade < 0){
            printf("Idade invalida!! Informe a idade: ");
            scanf("%d", &idade);
        }

        if (idade > 18){
            adultos++;
        }
    }

    printf("O Total de adultos e: %d", adultos);

    return 0;
}