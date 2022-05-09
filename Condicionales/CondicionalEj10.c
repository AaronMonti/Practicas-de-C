#include<stdio.h>

/*10. Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres divide 
a los otros dos exactamente. Análisis: Leídos los tres valores y almacenados en cada una de las variables A, 
B y C respectivamente se procede a verificar si cada uno de ellos divide exactamente a los otros dos. La 
división es exacta si el residuo de la división respectiva es igual a cero.*/

int main(){

int A,B,C;

printf("Ingrese un numero A:\n");
scanf("%d", &A);

printf("Ingrese un numero B:\n");
scanf("%d", &B);

printf("Ingrese un numero C:\n");
scanf("%d", &C);

if ((A % B && A % C) == 0){

    printf("Cada uno de los numeros divide exactamente a los otros dos");
}
else printf("Los numeros no se dividen exactamente entre ellos");


return 0;
}
