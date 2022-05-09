/* Completa los espacios en blanco de manera tal que el programa indique si la persona es o no mayor de
edad, ingresando un valor entero */




#include<stdio.h>

int main() {
int edad;



printf("Ingrese un valor entero\n");
scanf("%d", &edad);

/* if (edad >= 18) {
printf( "Es mayor de edad, ya que tiene %d anios\n" , edad);
}
else
printf ("No es mayor de edad\n"); */

if (edad <= 18) {
printf( "No es mayor de edad, ya que tiene %d anios\n" , edad);
}
else
printf ("Es mayor de edad\n");



return 0;
}