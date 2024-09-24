#include<stdio.h>

int main(void){
    
    int num;
    int maior=0;
    int menor=0;
    int total = 0;

    for (int i = 1; i <=10;i++){
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num > maior){maior = num;}

        if (num < menor){menor = num;}

        total += num;

    }

    printf("O valor minimo e %d, e maior e %d, a media e: %d", menor, maior, total/10);

    return 0;
}