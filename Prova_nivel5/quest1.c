/*1 - Fácil: Escreva um programa que leia dois números inteiros e exiba o maior deles.*/

int main(){
    int num1, num2;

    printf("Insira o 2 numeros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O Numero %d e o maior!\n", num1);
    }
    else{
        printf("O Numero %d e o maior!\n", num2);
    }

    return 0;

}