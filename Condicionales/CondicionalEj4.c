#include<stdio.h>

/* 4. Desarrolla un algoritmo que le permita leer 2 valores A y B e indicar si uno de los dos divide al 
otro exactamente. Análisis: Para dar solución al anterior ejercicio, primero se deben leer los dos valores y 
almacenar cada uno de ellos en una variable. Para el caso del desarrollo se almacenará un valor en la 
variable A y el otro en la variable B. Para saber si uno de los dos divide exactamente al otro se examina 
primero el caso en que B divida exactamente a A; se compara el residuo, si es cero se escribirá que divide 
exactamente a A de lo contrario se examina el caso en que A divida exactamente a B. Se compara nuevamente el 
residuo, si es cero se escribirá "A divide exactamente a B" sino "ninguno de los dos divide exactamente al 
otro". Se supone que los dos valores leídos son diferentes.  */

int main(){

int A,B;
int residuo1,residuo2;

printf("Ingrese un numero A:\n");
scanf("%d", &A);

printf("Ingrese un numero B:\n");
scanf("%d", &B);

residuo1 = A % B;
residuo2 = B % A;

if (residuo1 == 0){

    printf("B:%d divide exactamente a A:%d\n",B,A);
}
if (residuo2 == 0){

    printf("A:%d divide exactamente a B:%d\n",A,B);
}
else printf("Ninguno de los dos di2vide exactamente al otro");

return 0;
}
