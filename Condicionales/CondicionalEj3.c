#include<stdio.h>

/* 3. Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.*/

int main(){

int A,B;

printf("Ingrese un numero A:\n");
scanf("%d", &A);

printf("Ingrese un numero B:\n");
scanf("%d", &B);

if (A > B){

    printf("El numero A es el mayor\n", A);
    if (A % B == 0){
        printf("El numero A:%d es divisible por B:%d\n", A, B);
    }
    else{
        printf("El numero A:%d no es divisible por B:%d\n", A, B);
    }
}
else if (A < B){

    printf("El numero B es el mayor\n", B);
    if (B % A == 0){
        printf("El numero B:%d es divisible por A:%d\n", B, A);
    }
    else{
        printf("El numero B:%d no es divisible por A:%d\n", B, A);
    }
}

return 0;
}
