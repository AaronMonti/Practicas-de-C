#include<stdio.h>

/* 9. Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cual es valor del centro. 
Análisis: Una vez leídos los valores en cada uno de los indicadores (variables A,B,C) se procede a comparar 
cada uno de ellos con los otros dos para verificar si es valor del centro o no. Un valor es del centro si es 
menor que uno y mayor que otro o el caso contrario. Igualmente se asume que los tres valores leídos son 
diferentes.
 */

int main(){

int A,B,C;

printf("Ingrese un numero A:\n");
scanf("%d", &A);

printf("Ingrese un numero B:\n");
scanf("%d", &B);

printf("Ingrese un numero C:\n");
scanf("%d", &C);

if (A > B & A < C){

    printf("El numero %d esta entre los numeros %d y %d",A,B,C);
}
else if (B > A & B < C){
    printf("El numero %d esta entre los numeros %d y %d",B,A,C);
}
else printf("El numero %d esta entre los numeros %d y %d",C,A,B);


return 0;
}
