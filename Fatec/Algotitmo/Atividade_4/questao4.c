#include<stdio.h>
#include<stdlib.h>


int main(void){
    
    int num, dez_milha, milha, centena, dezenas, unidades;

    printf("Informe o numero: ");
    scanf("%d", &num);

    dez_milha = num/10000;
    num = num - dez_milha*10000;

    milha = num/1000;
    num = num - milha*1000;

    centena = num/100;
    num = num - centena*100;

    dezenas = num/10;
    num = num - dezenas*10;

    unidades = num;

    if ((dez_milha*10000 + milha*1000 + centena*100 + dezenas*10 + unidades) == 
    (unidades*10000 + dezenas*1000 + centena*100 + milha*10 + dez_milha)){

        printf("E um palindromo!");
    }
    else{
        printf("Nao e um palindromo!");
    }

    return 0;

}