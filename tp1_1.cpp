#include <stdio.h>

int main (){
	printf("Hola mundo\n\n");

	int a=4;
	int *p;
	p = &a;
	
	printf("El contenido del puntero: %i\n\n", *p);
	printf("Dirección de memoria almacenada por el puntero: %p\n\n", p);
	printf("Dirección de memoria de la variable: %p\n\n", &a);
	printf("Dirección de memoria del puntero: %p\n\n", &p);
	printf("Tamaño de memoria utilizado por esa variable usando la función sizeof(): %i\n\n", sizeof(a));


	return 0;
}

/* 
El contenido del puntero
Dirección de memoria almacenada por el puntero.
Dirección de memoria de la variable.
Dirección de memoria del puntero.
Tamaño de memoria utilizado por esa variable usando la función sizeof().

 */