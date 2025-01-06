#include <stdio.h>

void ordenar(int *a, int*b, int *c){
    int temp;
    if(*a<*b){
        temp=*a;
        *a=*b;
        *b=temp;
    }
    if(*b<*c){
        temp=*b;
        *b=*c;
        *c=temp;
    }
    if(*a<*b){
        temp=*a;
        *a=*b;
        *b=temp;
    }
}

int main(){
    int a, b, c;
    printf("Ingrese el valor de a:");
    scanf("%d", &a);
    printf("Ingrese el valor de b:");
    scanf("%d", &b);
    printf("Ingrese el valor de b:");
    scanf("%d", &c);

    printf("ANTES DE ORDENAR: a=%d, b=%d, c=%d\n", a, b, c);
    ordenar(&a, &b, &c);
    printf("DESPUES DE ORDENAR: a=%d, b=%d, c=%d\n", a, b, c);
    return 0;
}
