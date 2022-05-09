/* 6. Desarrolle un algoritmo que le permita leer un valor entero positivo N y decir si es primo o no. */
#include<stdio.h>
#include<stdbool.h>

int main(){
    int N, m = 2;
    bool bandera=true;

    printf("Ingrese un numero\n");
    scanf("%d", &N);
    fflush(stdin);

    while(bandera && m < N){
        
        if (N % m == 0){
            bandera = false;
        }
        else{
            m++;
        }
    }

    if (bandera = true){
        printf("El numero es primo");
    }
    else if (bandera = false){
        printf("El numero no es primo");
    }


return 0;
}
