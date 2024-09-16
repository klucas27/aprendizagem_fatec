#include<stdio.h>
#include<stdlib.h>

int main(void){
    float litros_consumidos=0;
    float km_percorridos=0;
    float km_por_litro=0;
    float km_por_litro_medio=0;
    int ctt = 1;
    
    printf("Quantos litros de gasolina foram consumidos? (-1 para Sair): ");
    scanf("%f", &litros_consumidos);
    printf("Quantos quilometros foram percorridos? (-1 para Sair): ");
    scanf("%f", &km_percorridos);
    
    if (litros_consumidos == -1 || km_percorridos == -1){
            printf("Nenhum Valor inserido!\n");
        }else{
            km_por_litro = km_percorridos / litros_consumidos;
            printf("km por litro: %.2f\n", km_por_litro);  
            km_por_litro_medio += km_por_litro; 

            
            while(litros_consumidos != -1 || km_percorridos != -1){
                printf("Quantos litros de gasolina foram consumidos? (-1 para Sair): ");
                scanf("%f", &litros_consumidos);
                printf("Quantos quilometros foram percorridos? (-1 para Sair): ");
                scanf("%f", &km_percorridos);
                if (litros_consumidos == -1 || km_percorridos == -1){
                    break;
                }else{
                    km_por_litro = km_percorridos / litros_consumidos;
                    printf("km por litro: %.2f\n", km_por_litro);  
                    km_por_litro_medio += km_por_litro; 
                    ctt++;
                }   
            }
            printf("A media de km por litro foi: %.2f\n", km_por_litro_medio/ctt);

        }
        
    system("Pause");
    return 0;
}
