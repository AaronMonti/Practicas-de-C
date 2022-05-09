/* 3. Desarrolle un algoritmo que le permita realizar la suma de los primeros N números impares, el N se ingresa 
por teclado */


#include<stdio.h>

int main() {

    int num, cont;
    int acum = 0;

    printf("Ingrese un numero impar:\n");
    scanf("%d", &num);
    fflush(stdin);

    acum = acum + num;

    while (num % 2 != 0){

        printf("Ingrese un numero impar:\n");
        scanf("%d", &num);
        fflush(stdin);

        acum = acum + num;

        printf("La suma es:%d\n", acum);
    }


    return 0;
}