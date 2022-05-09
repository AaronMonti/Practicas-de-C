#include<stdio.h>

/*8. Desarrolla un algoritmo que le permita leer tres valores y almacenarlos en las variables A, B y C 
respectivamente. El algoritmo debe indicar cuál es el mayor. Para este caso se asume que los tres valores 
leídos por el teclado son valores distintos. Análisis: Es necesario leer los tres valores a comparar, cada 
uno de ellos se almacena en una variable que para el ejercicio será A, B y C. Para saber si A es el valor 
mayor se compara con las variables B y C respectivamente. En caso de ser mayor se escribe el mensaje, en 
caso contrario se sigue verificando otra variable caso B y si no por defecto se dirá que C es el mayor 
asumiendo que los tres valores almacenados son diferentes.*/

int main(){

int A,B,C;

printf("Ingrese un numero A:\n");
scanf("%d", &A);

printf("Ingrese un numero B:\n");
scanf("%d", &B);

printf("Ingrese un numero C:\n");
scanf("%d", &C);

if (A > B & A > C){

    printf("El numero %d es mayor que %d y %d",A,B,C);
}
else if (B > A & B > C){
    printf("El numero %d es mayor que %d y %d",B,A,C);
}
else printf("El numero %d es mayor que %d y %d",C,A,B);


return 0;
}
