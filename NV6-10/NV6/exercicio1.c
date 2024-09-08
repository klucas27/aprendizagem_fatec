#include <stdio.h>

int elevado(int base, int expoente){

    if (expoente == 0){
        return 1;
    }
    else{
        return elevado(base, expoente-1) * base;
    }
    
}

int main(){
    int tt;

    tt = elevado(2, 5);

    printf("%d", tt);

}