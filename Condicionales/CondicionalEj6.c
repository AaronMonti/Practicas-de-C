#include<stdio.h>

/*6. Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos números 
es par. Análisis: Primero se leen los dos datos almacenando cada uno de ellos en un variable, en el caso del 
ejercicio el primer valor se almacena en la variable A y el segundo se almacena en la variable B. Al 
sumarlos para saber si el resultado es par o impar se divide entre dos chequeando el residuo. Si el residuo 
es cero es porque el valor es par y si el residuo es uno es porque el valor es impar.*/

int main(){

int A,B,suma;

printf("Ingrese un numero A:\n");
scanf("%d", &A);

printf("Ingrese un numero B:\n");
scanf("%d", &B);

suma = A+B;

if (suma % 2 == 0){

    printf("La suma de ambos numeros es par");
}
else {
    printf("La suma de ambos numeros es impar", A);
}


return 0;
}
