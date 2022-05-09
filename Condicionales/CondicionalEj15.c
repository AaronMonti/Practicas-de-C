/* Completa el programa incluyendo el espacio en blanco en el siguiente fragmento de programa de
manera que una persona de menos de 1,82 m. de estatura y peso superior a 90,7 Kg. se clasifique como de
peso excesivo, y las demás personas como de peso adecuado. */


//Cambiando el AND por un OR, el resultado sera igual a la primera condicion que se cumpla o no se cumpla

#include<stdio.h>

int main() {

    float estatura;
    float peso;

    printf("Ingrese la estatura\n");
    scanf("%f", &estatura);
    fflush(stdin);
    printf("Ingrese el peso\n");
    scanf("%f", &peso);
    fflush(stdin);
    if ((estatura <= 1.82) && (peso >= 90.7)) {
        printf("Peso excesivo!");
    }
    else
        printf("Peso adecuado.");


return 0;
}