/* 5. Desarrolle un algoritmo que le permita leer un valor entero positivo N y calcule su factorial. */

#include<stdio.h>

int main (){
    
    int N,i;
    int factorial = 1;

    printf("Ingrese un valor entero positivo\n");
    scanf("%d", &N);
    fflush(stdin);

    i = 1;

    while (i <= N){
        factorial = factorial * i;
        i++;
    }

    printf("El factorial de %d es: %d\n", N, factorial);

    return 0;
}