#include <stdio.h>
#include <stdlib.h>

// Función para incrementar el valor de una variable usando puntero
void incrementar(int *n) {
    (*n)++;
}

// Función para multiplicar el valor de una variable por un factor usando puntero
void multiplicar(int *n, int factor) {
    (*n) *= factor;
}
int main() {
    // Reservamos memoria dinámica para una variable entera
    int *x = (int *)malloc(sizeof(int)); 
    // Inicializamos la variable
    *x = 10;
    // Imprimimos el valor original
    printf("Valor original de x: %d\n", *x);
    // Modificamos el valor de x usando la función incrementar
    incrementar(x);
    printf("Después de incrementar, x = %d\n", *x);
    // Modificamos el valor de x usando la función multiplicar
    multiplicar(x, 5); 
    printf("Después de multiplicar por 5, x = %d\n", *x);
    return 0;
}
