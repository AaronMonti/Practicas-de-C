#include<stdio.h>

/*17. Ingresados tres caracteres, la computadora los muestra ordenados alfabéticamente.*/

int main(){

char c1;
char c2;
char c3;

printf("Ingrese un caracter:\n");
scanf("%c", &c1);
fflush(stdin);

printf("Ingrese un caracter:\n");
scanf("%c", &c2);
fflush(stdin);

printf("Ingrese un caracter:\n");
scanf("%c", &c3);
fflush(stdin);

if ((c1 < c2 ) && ( c2 < c3 )) printf ("%c,%c,%c", c1,c2,c3);
else if ((c1 < c3 ) && ( c3 <  c2 )) printf ("%c,%c,%c", c1,c3,c2);
else if ((c2 < c1 ) && ( c1 < c3 )) printf ("%c,%c,%c", c2,c1,c3);
else if ((c2 < c3 ) && ( c3 < c1 )) printf ("%c,%c,%c", c2,c3,c1);
else if ((c3 < c1 ) && ( c1 < c2 )) printf ("%c,%c,%c", c3,c1,c2);
//else if ((c3 < c2 ) && ( c2 < c1 ))
else printf ("%c,%c,%c", c3,c2,c1);
return 0;
}
