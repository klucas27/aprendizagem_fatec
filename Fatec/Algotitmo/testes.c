#include<stdio.h>
#include<stdlib.h> 

int main(void){

    int x = 5;
    int produto = 5;
    produto = ++x + x;

    printf("%d", produto);
    printf("%d", x);
}