#include<stdio.h>

int main(void){

    int altura;
    printf("Informe a altura da Piramide: ");
    scanf("%d", &altura);

    int ctt = 1;

    int ctt_3 = 1;

    int ctt_4 = altura;

    while (ctt <= altura){
        
        ctt_4--;
        int ctt_5 = 0;
        while (ctt_5 <= ctt_4){
            printf(" ");
            ctt_5++;

        }
        int ctt_2 = 1;
        while (ctt_2 <= ctt_3){
            printf("*");
            ctt_2++;
        }
        printf("\n");
        // printf("%d", ctt);
        // printf("%d", ctt_3);
        ctt_3 += 2;
        ctt++;
    }
}