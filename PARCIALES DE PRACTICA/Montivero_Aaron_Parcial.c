#include<stdio.h>

int procesoPrincipal(int * Totalclientes, float * Totalimporte, char * cmi, float * TimporteCategoria);

void procesoSecundario(char categoria, float importe, float * importeI, float * importeT, float * importeV, int * contI, int* contT, int * contV);


int main(){
    
    int Totalclientes = 0;
    float Totalimporte, TimporteCategoria;
    char cmi; /*categoria mayor factura*/
    Totalclientes = procesoPrincipal(&Totalclientes, &Totalimporte, &cmi, &TimporteCategoria);

    printf("El total general de clientes fue de: %d\n", Totalclientes);
    printf("El categoria con mayor facturacion fue la %c con un importe de: %.2f\n", cmi, TimporteCategoria);
    printf("La facturacion total fue de: %.2f\n", Totalimporte);

    return 0;
}

int procesoPrincipal(int * Totalclientes, float * Totalimporte, char * cmi, float * TimporteCategoria){

    int j, nro_factura, contI, contT, contV, Totalcliente = 0;
    float importe, importeI, importeT, importeV;
    float TimporteI = 0, TimporteT = 0, TimporteV = 0;
    char categoria;


    //PUNTOS DE VENTA
    for(j=1; j <= 10; j++){

        printf("Punto de venta N%c %d\n",167, j);

        importeI = 0;
        importeT = 0;
        importeV = 0;
        contI = 0;
        contT = 0;
        contV = 0;

        //Ingreso de numeros de factura
        printf("Ingrese un numero de factura:\n");
        scanf("%d", &nro_factura);
        fflush(stdin);

        while(nro_factura > 0){

            printf("Ingrese la categoria del cliente con factura N%c %d\n",167, nro_factura);
            scanf("%c", &categoria);
            fflush(stdin);

            printf("Ingrese el importe del cliente\n");
            scanf("%f", &importe);
            fflush(stdin);

            procesoSecundario(categoria, importe, &importeI, &importeT, &importeV, &contI, &contT, &contV);

            //Ingreso otra factura nuevamente
            printf("Ingrese un numero de factura, pulse 0 para salir:\n");
            scanf("%d", &nro_factura);
            fflush(stdin);

        }

        printf("Punto de venta N%c: %d -- Facturacion:\n",167, j);
        printf("I:%.2f, %d Clientes\n", importeI, contI);
        printf("T:%.2f, %d Clientes\n", importeT, contT);
        printf("V:%.2f, %d Clientes\n", importeV, contV);

        TimporteI = TimporteI + importeI;
        TimporteT = TimporteT + importeT;
        TimporteV = TimporteV + importeV;

        Totalcliente = Totalcliente + contI + contT + contV;

    }

    *Totalimporte = TimporteI + TimporteT + TimporteV;

    if (TimporteI > TimporteT && TimporteI > TimporteV){
        *cmi = 'I';
        *TimporteCategoria = TimporteI;
    }
    else if (TimporteT > TimporteI && TimporteT > TimporteV){
        *cmi = 'T';
        *TimporteCategoria = TimporteT;
    }
    else{
        *cmi = 'V';
        *TimporteCategoria = TimporteV;
    }

return Totalcliente;

}


void procesoSecundario(char categoria, float importe, float * importeI, float * importeT, float * importeV, int * contI, int* contT, int * contV){
    switch (categoria){
    case 'i':
    case 'I': *importeI = *importeI + importe;
            (*contI)++;
        break;
    case 't':
    case 'T': *importeT = *importeT + importe;
            (*contT)++;
        break;
    case 'v':
    case 'V': *importeV = *importeV + importe;
            (*contV)++;
        break;
    }
}