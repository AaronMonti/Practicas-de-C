#include<stdio.h>

//1. Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho
//n�mero es Positivo, Negativo o 0 (cero).


int main(){

int num;

printf("Ingrese un numero entero:");
scanf("%d", &num);

if (num > 0){

    printf("El numero ingresado es positivo");
}
else if (num < 0){

    printf("El numero ingresado es negativo");
}
else printf("El numero ingresado es 0");

return 0;
}
