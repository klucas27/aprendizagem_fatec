#include<stdio.h>


int main(void){

    int ctt = 0;
    int e_igual=0;
    while (e_igual == 0){
        if ((170+1*ctt) == 150+3*ctt){
            e_igual = 1;
        }
        ctt++;
    }

    printf("B passara depois de %d anos.", ctt);
    
    return 0;
}