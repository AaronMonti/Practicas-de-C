#include<stdio.h>

/*5. Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es par o 
impar.*/

int main(){

int A;

printf("Ingrese un numero A:\n");
scanf("%d", &A);

if (A % 2 == 0){

    printf("El numero %d es par", A);
}
else {
    printf("El numero %d es impar", A);
}


return 0;
}
