#include<stdio.h>

#define COMISSAO (float) 0.05
#define SALARIO (float) 950

int main(){

    float valor_venda;

    printf("Informe o valor de venda total: "); scanf("%f", &valor_venda);
    
    printf("O Valor do salario total e: R$ %.2f\n", SALARIO+(valor_venda*COMISSAO));

    return 0;
}