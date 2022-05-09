#include<stdio.h>

/* 2. Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cuál de los dos valores 
leídos es el mayor. Análisis: primero se deben leer los dos valores y almacenar cada uno de ellos en una 
variable. Para el caso del desarrollo se almacenará un valor en la variable A y el otro en la variable B. 
Para poder saber cuál de los dos valores es mayor simplemente se comparan las dos variables y se escribirá 
cuál de las dos es la mayor. Se supone que los dos valores leídos son diferentes.  */


int main(){

int A,B;

printf("Ingrese un numero A:");
scanf("%d", &A);

printf("Ingrese un numero B:");
scanf("%d", &B);

if (A > B){

    printf("El numero A es mayor que B");
}
else if (A < B){

    printf("El numero B es mayor que A");
}

return 0;
}
