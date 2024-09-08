#include <stdio.h>
/*2 - Médio: Crie um programa que leia a idade de várias pessoas e 
calcule a média de idade. A leitura deve parar quando uma idade negativa for digitada.*/


int main(){

    int idades = 0;
    int nova_idade = 0;
    int media;
    int contagem = 0;

    while (1){

        printf("Informe uma idade ou -1 para sair: ");
        scanf("%d", &nova_idade);
        if (nova_idade < 0){
            break;
        }
        idades += nova_idade;
        contagem += 1;  

    };

    media = idades/contagem;

    printf("%d", media);

    return 0;

}