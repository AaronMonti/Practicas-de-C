#include<stdio.h>

/*20. Se lee un número entero correspondiente a un año, y se muestra un mensaje indicando si es año 
bisiesto.*/

int main(){

int lado1, lado2, lado3;
printf("Ingrese los lados de un triangulo\n");

printf("Ingrese el lado 1:\n");
scanf("%d", &lado1);
fflush(stdin);

printf("Ingrese el lado 2:\n");
scanf("%d", &lado2);
fflush(stdin);

printf("Ingrese el lado 3:\n");
scanf("%d", &lado3);
fflush(stdin);

if (lado1 == lado2){
    if(lado1==lado3){
        printf("Es un triangulo Equilatero");
    }
    else printf("Es un triangulo Isoceles");
}
else{
    if(lado2==lado3){
        printf("Es un triangulo Isoceles");
    }
    else {
        if(lado1==lado3){
            printf("Es un triangulo Isoceles");
        }
        else printf("Es un triangulo Escaleno");
    }
}


return 0;
}
