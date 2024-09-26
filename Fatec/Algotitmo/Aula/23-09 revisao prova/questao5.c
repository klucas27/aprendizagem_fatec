#include<stdio.h>
#include<math.h>

int main(void){

    int temp = 0;
    int acert = 0;
    while (acert == 0){
        if ((5000*pow((1+(3/100)), temp)) == (7000*pow((1+(2/100)), temp))){
            acert = 1;
        }
        temp++;
    }

    printf("O tempo e: %d", temp);


    return 0;
}