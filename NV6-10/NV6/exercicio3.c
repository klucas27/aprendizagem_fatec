#include <stdio.h>

int main(){

    int num;
    float num_float;
    char text[] = "Text";

    int *prt_num = &num;
    float *prt_num_float = &num_float;
    char *prt_text = &text;

    printf("%p\n%p\n%p", prt_num, prt_num_float, prt_text);
}