#include <stdio.h>

int main(){
    /* Está função retorna o maior e o menor numero respectivamente! */
    
    int num1, num2, num3, num4;
    int maior_num, menor_num;

    printf("\nInforme um numero: \n");
    scanf("%d", &num1);
    printf("Informe outro numero: \n");
    scanf("%d", &num2);
    printf("Informe outro numero: \n");
    scanf("%d", &num3);
    printf("Informe mais um numero: \n");
    scanf("%d", &num4);

    if (num1 >= num2 && num1 >= num3 && num1 >= num4){ // Verifica se é maior!
        maior_num = num1;
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4){
        maior_num = num2;
    }
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4){
        maior_num = num3;
    }
    else if (num4 >= num1 && num4 >= num3 && num4 >= num3){
        maior_num = num4;
    }
    
    if (num1 <= num2 && num1 <= num3 && num1 <= num4){ // Verifica se é menor!
        menor_num = num1;
    }
    else if (num2 <= num1 && num2 <= num3 && num2 <= num4){
        menor_num = num2;
    }
    else if (num3 <= num1 && num3 <= num2 && num3 <= num4){
        menor_num = num3;
    }
    else if (num4 <= num1 && num4 <= num3 && num4 <= num3){
        menor_num = num4;
    }
    
    printf("O Maior numero e: %d\nO Menor numero e: %d", maior_num, menor_num);

    return 0;
}