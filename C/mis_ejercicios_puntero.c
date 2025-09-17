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

struct persona{
    char nombre[10];
    int edad;
};
void ejercicio5(){
    struct persona p1 = {"Juan",15};
    struct persona *p = &p1;
    printf("Ejercicio 5: %s tiene %d años\n", p->nombre, p->edad);
    
};




int main(){
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    return 0;
}