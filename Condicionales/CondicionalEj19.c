#include<stdio.h>

/*19. Se ingresa un número de hasta 5 cifras y se indica si es o no capicúa*/

int main(){

int num,digito1,digito2,digito3,digito4,digito5;
printf("Ingrese un numero de hasta 5 cifras:\n");
scanf("%d", &num);
fflush(stdin);

if ((num >= 10000) && (num <= 99999)){
    digito1 = (num/10000) % 10;
    digito2 = (num/1000) % 10;
    digito3 = (num/100) % 10;
    digito4 = (num/10) % 10;
    digito5 = (num % 10) %10;

    
    printf("El digito 1 es %d\n", digito1);
    printf("El digito 2 es %d\n", digito2);
    printf("El digito 3 es %d\n", digito3);
    printf("El digito 4 es %d\n", digito4);
    printf("El digito 5 es %d\n", digito5);

    if ((digito1 == digito5) && (digito2 == digito4)){
        printf("El numero es capicua");
    }
    else printf("El numero no es capicua");

}
else printf("El numero que ingreso no tiene 5 cifras");


return 0;
}
