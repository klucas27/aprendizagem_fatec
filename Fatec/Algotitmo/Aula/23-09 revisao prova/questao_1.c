#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;

    printf("Ingresse um numero positivo: ");
    scanf("%d", &num);
    
    while(num < 0){
        
        printf("Ingresse um numero positivo: ");
        scanf("%d", &num);
    }

    for (int x = 0; x <=10; x++){
        printf("%d\n", num*x);
    }

    
    return 0;
}