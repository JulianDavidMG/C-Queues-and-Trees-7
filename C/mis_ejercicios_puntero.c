#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejercicio1(){
    int h = 200;
    int r =400;
    int *p = &h;
    int *t = &r;
    printf("Ejercicio1: %d y %d\n", *p,*t);
}


void ejercicio2(){
    int e = 50;
    int *p = &e;
    *p = 1000;
    printf("Ejercicio2: e = %d\n", e);
    
}

void ejercicio3(){
    char yes[3] = {'s', 'o', 'l'};
    char *p = yes;
    printf("Ejercicio3: Primer elemento = %c\n", *p);
}

void ejercicio4(){
    char yes[3] = {'s', 'o', 'l'};
    char *p = yes;
    printf("Ejercicio4: sol en tabla ASCII ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main(){
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    return 0;
}