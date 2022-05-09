#include<stdio.h>

int procesoPrincipal(float * prom, int * anio, char * grado);

void proceso2(char grado, float nota, float * acumA, float * acumB, int * contA, int * contB);

int main(){
    int totalLegajosProc = 0;
    float promedio;
    int anio;
    char grado;

    totalLegajosProc = procesoPrincipal(&promedio, &anio, &grado);

    printf("El total de legajos procesadors es: %d\n", totalLegajosProc);
    
    printf("El mayor promedio de todos es:%2.f, del grado %c y del a%co %d", promedio,grado, 164, anio);
    getchar();
    return 0;
}


int procesoPrincipal(float * prom, int * anio, char * grad){

    int i, legajo, contA, contB, totalLegajosProc = 0;
    float acumA, acumB, nota, promA, promB, mayProm=0;
    char grado;


    for(i=1; i<=3; i++){

        //contadores y acumuladores inicializados
        acumB = 0;
        acumA = 0;
        contA = 0;
        contB = 0;

        //Ingreso de numeros de legajos
        printf("Ingrese un numero de legajo:\n");
        scanf("%d", &legajo);
        fflush(stdin);

        //cant de legajos indeterminada asi que uso While
        while (legajo > 0){

            //Ingreso del grado
            printf("Ingresar el grado del alumno:\n");
            scanf("%c", &grado);
            fflush(stdin);

            //Ingreso de la nota
            printf("Ingrese la nota del alumno:\n");
            scanf("%f", &nota);
            fflush(stdin);

            //guardo valores en el proceso secundario
            proceso2(grado, nota, &acumA, &acumB, &contA, &contB);

            //Ingreso otro legajo nuevamente
            printf("Ingrese un numero de legajo, para terminar pulse 0:\n");
            scanf("%d", &legajo);
            fflush(stdin);
        }

        totalLegajosProc = totalLegajosProc + contA + contB;

        if (contA > 0) {

            promA = (float)acumA / contA;
            printf("A%co %d --> Promedio A:%2.f\n", 164,i, promA);

        }
        
        if (contB > 0) {

            promB = (float)acumB / contB;
            printf("A%co %d --> Promedio B:%2.f\n", 164,i, promB);
        }

        if (promA > *prom){
            *prom = promA;
            *anio = i;
            *grad = 'A';
        }

        if (promB > *prom){
            *prom = promA;
            *anio = i;
            *grad = 'B';
        }
        
    }
return totalLegajosProc;
}

void proceso2(char grado, float nota, float * acumA, float * acumB, int * contA, int * contB){
    switch (grado){
        case 'a':
        case 'A': *acumA = *acumA + nota;
            (*contA)++;
            break;
        case 'b':
        case 'B': *acumB = *acumB + nota;
            (*contB)++;
            break;
    }
}