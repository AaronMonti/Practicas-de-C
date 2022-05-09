#include<stdio.h>

/* 22. Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es 
múltiplo de Z. Análisis: Para resolver el ejercicio planteado anteriormente, hay que leer primero el 
valor del número y almacenarlo en una variable (N). Luego leer otro valor y almacenarlo en la variable 
Z. Para saber si el número almacenado en la variable N es múltiplo del número almacenado en Z, se hace 
la división entre Z y N, si la división es exacta entonces N es múltiplo de Z, de lo contrario N no será 
múltiplo de Z. */

int main(){

int N, Z;

printf("Ingrese un valor entero N:\n");
scanf("%d", &N);
fflush(stdin);

printf("Ingrese un valor entero Z\n");
scanf("%d", &Z);
fflush(stdin);

if (Z % N == 0) {
    printf("N es multiplo de Z");
}
else printf("N no es multiplo de Z");




return 0;
}
