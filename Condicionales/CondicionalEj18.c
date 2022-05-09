#include<stdio.h>

/*18. Ingresados 3 números enteros, la computadora indica si están desordenados u ordenados en forma 
creciente o decreciente.*/

int main(){

int n1,n2,n3;

printf("Ingrese un entero:\n");
scanf("%d", &n1);
fflush(stdin);

printf("Ingrese un entero:\n");
scanf("%d", &n2);
fflush(stdin);

printf("Ingrese un entero:\n");
scanf("%d", &n3);
fflush(stdin);

//n1 , n2 ,n3
if ((n1 < n2) && (n2 < n3)){
    printf("Estan ordenados en forma creciente");
}
else if ((n1 > n2) && (n2 > n3)){
    printf("Estan ordenados en forma decreciente");
}
else printf("Estan desordenados");

return 0;
}
