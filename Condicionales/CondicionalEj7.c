#include<stdio.h>

/*7. Ingresados dos números reales, la computadora muestra su cociente. Si el segundo número es cero, la 
computadora muestra un mensaje indicando la imposibilidad de la operación.*/

int main(){

float A,B,division;

printf("Ingrese un numero real A:\n");
scanf("%f", &A);

printf("Ingrese un numero real B:\n");
scanf("%f", &B);

division = A/B;

if (B == 0){

    printf("Como B es %2.f, es imposible realizar la operacion",B);
}
else {
    printf("El cociente entre A y B es: %2.f", division);
}


return 0;
}
