#include<stdio.h>
#include<math.h>

#define K1 1.611
#define K2 1.918


int main(){

    float a = 0.0;

    for (int t = 1; t <= 9999; t++){

        a = K1 + (K2 * log(t));

        if ((14 - a) <= 10E-3){
        
            printf("\n ->> %d", t);          
            break;
        }

        printf("%f\n", a);

    }

    return 0;
}