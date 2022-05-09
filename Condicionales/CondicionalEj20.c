/* Se lee un número entero correspondiente a un año, y se muestra un mensaje indicando si es año
bisiesto. */


#include<stdio.h>

int main() {
    int anno;

    printf("Ingrese año : \n");
    scanf("%d",&anno);
    fflush(stdin);


    if ((anno%4 == 0) && (anno%100 != 0) || (anno % 400 == 0)) {
        printf("AÑO BISIESTO\n");
    }
    else printf("NUMERO NO BISIESTO\n");


    return 0;
}