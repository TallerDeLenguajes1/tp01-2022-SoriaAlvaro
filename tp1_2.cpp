#include <stdio.h>

int cuadrado (int a){
    return a*a;
}
void cuadradoVoid (int *a){
    *a*=*a;
}
int main (){

    int num=2, num2=3;
    printf("num: %d\n", num);
    num = cuadrado(num);
    printf("\tDirección de memoria %p\nContrenido de la variable: %d\n\n", &num, num);

    printf("num: %d\n", num2);
    cuadradoVoid(&num2);
    printf("\tDirección de memoria %p\nContrenido de la variable: %d\n\n", &num2, num2);

    return 0;
}