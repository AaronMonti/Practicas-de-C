#include<stdio.h>

int procesoPrincipal(int * Totalgrupos, int * Totalclientes, float * Totalimporte, char * cmi, float * TimporteClase);

void proceso2(char clase, float importe, float * importeX, float * importeY, float * importeZ, int * contX, int* contY, int * contZ);


int main(){
    
    int Totalclientes = 0;
    int TotalGrupos = 0;
    float Totalimporte, TimporteClase;
    char cmi; /*clase mayor factura*/
    Totalclientes = procesoPrincipal(&TotalGrupos, &Totalclientes, &Totalimporte, &cmi, &TimporteClase);

    printf("El total de grupos fue de: %d\n", TotalGrupos);
    printf("El total de clientes fue de: %d\n", Totalclientes);
    printf("El clase con mayor facturacion fue %c con un importe de:%.2f\n", cmi, TimporteClase);
    printf("El importe total fue de:%2.f\n", Totalimporte);

    return 0;
}

int procesoPrincipal(int * Totalgrupos, int * Totalclientes, float * Totalimporte, char * cmi, float * TimporteClase){

    int i, numGrupo, cant_clientes, contX, contY, contZ, contGrupos;
    float importe, importeX, importeY, importeZ;
    float TimporteX = 0, TimporteY = 0, TimporteZ = 0;
    char clase;

    contGrupos = 0;

    printf("Ingrese un numero para el grupo:\n");
    scanf("%d", &numGrupo);
    fflush(stdin);


    while (numGrupo > 0){

        importeX = 0;
        importeY = 0;
        importeZ = 0;
        contX = 0;
        contY = 0;
        contZ = 0;

        printf("Ingrese la cantidad de clientes:\n");
        scanf("%d", &cant_clientes);
        fflush(stdin);

        for (i=1; i <= cant_clientes; i++){
            printf("Ingrese la clase del cliente %d\n", i);
            scanf("%c", &clase);
            fflush(stdin);

            printf("Ingrese el importe del cliente %d\n", i);
            scanf("%f", &importe);
            fflush(stdin);

            proceso2(clase, importe, &importeX, &importeY, &importeZ, &contX, &contY, &contZ);
        }

        printf("Grupo %d -- Importe:\n", numGrupo);
        printf("X:%.2f, %d Clientes\n", importeX, contX);
        printf("Y:%.2f, %d Clientes\n", importeY, contY);
        printf("Z:%.2f, %d Clientes\n", importeZ, contZ);
        contGrupos++;

        printf("Ingrese un numero para el grupo. Ingrese 0 para terminar\n");
        scanf("%d", &numGrupo);
        fflush(stdin);

        TimporteX = TimporteX + importeX;
        TimporteY = TimporteY + importeY;
        TimporteZ = TimporteZ + importeZ;

        Totalclientes = cant_clientes;

    }

    *Totalimporte = TimporteX + TimporteY + TimporteZ;

    if (TimporteX > TimporteY && TimporteX > TimporteZ){
        *cmi = 'X';
        *TimporteClase = TimporteX;
    }
    else if (TimporteY > TimporteX && TimporteY > TimporteZ){
        *cmi = 'Y';
        *TimporteClase = TimporteY;
    }
    else{
        *cmi = 'Z';
        *TimporteClase = TimporteZ;
    }

    *Totalgrupos = contGrupos;

return Totalclientes;

}


void proceso2(char clase, float importe, float * importeX, float * importeY, float * importeZ, int * contX, int* contY, int * contZ){
    switch (clase){
    case 'x':
    case 'X': *importeX = *importeX + importe;
            (*contX)++;
        break;
    case 'y':
    case 'Y': *importeY = *importeY + importe;
            (*contY)++;
        break;
    case 'z':
    case 'Z': *importeZ = *importeZ + importe;
            (*contZ)++;
        break;
    }
}