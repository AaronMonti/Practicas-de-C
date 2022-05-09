/* 4. Generar un programa que ingresar N números naturales y que muestre la suma, el promedio, el valor 
máximo, el mínimo y el cuadrado. */


#include<stdio.h>

int main() {

    int n, acum, cont, nums, max, min;
    int cuadrado;
    float promedio;
    

    acum = 0;
    cont = 1;

    printf("Ingrese la cant de numeros que va a ingresar por teclado:\n");
    scanf("%d", &n);
    fflush(stdin);


    while (cont <= n){

        printf("Ingrese un numero natural:\n");
        scanf("%d", &nums);
        fflush(stdin);

        

        if (cont == 1){
            max = nums;
            min = nums;
        }
        else {
            if (nums > max) {
                max = nums;
            }
            if (nums < min){
                min = nums;
            }
        }

        acum = acum + nums;
        cont = cont + 1;
    }

    promedio = acum/n;
    cuadrado = acum*acum;
    printf("La suma de todos los numeros es: %d\n", acum);

    printf("El promedio de la suma de todos los numeros es: %2.f\n", promedio);

    printf("El valor max es: %d y el valor minimo es: %d\n", max, min);

    printf("El cuadrado de la suma es: %d\n", cuadrado);


    return 0;
}