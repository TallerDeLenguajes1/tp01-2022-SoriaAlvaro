#include <stdio.h>

int cuadrado (int a){
    return a*a;
}
void cuadradoVoid (int *a){
    *a*=*a;
}

void invertir (int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar (int *a, int *b){
    if(*a > *b){
        int aux;
        aux = *b;
        *b = *a;
        *a = aux;
    }
}
int main (){

    int num=2, num2=3;
    printf("\tnum: %d\n", num);
    num = cuadrado(num);
    printf("\tDirección de memoria %p\n\tContrenido de la variable: %d\n\n", &num, num);

    printf("\tnum: %d\n", num2);
    cuadradoVoid(&num2);
    printf("\tDirección de memoria %p\n\tContrenido de la variable: %d\n\n", &num2, num2);


    printf("\n\n\n#############################################\n\n\n");

    int a=2,b=5;
    printf("\ta: %d\n\tb: %d\n\n", a, b);
    printf("\n\tINVERTIDO\n\n");
    invertir(&a, &b);
    printf("\ta: %d\n\tb: %d\n\n", a, b);

    printf("\n\n\n#############################################\n\n\n");

    
    printf("\ta: %d\n\tb: %d\n\n", a, b);
    printf("\n\tORDENADO\n\n");
    ordenar(&a, &b);
    printf("\ta: %d\n\tb: %d\n\n", a, b);
    
    return 0;
}