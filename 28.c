#include<stdio.h>
//Segun el numero que pongas es el mes en el que te dira que estamos//
main(){
int mes;

    printf("\t\t Menu de opciones \n\n");
    printf("\t 1 \n");
    printf("\t 2 \n");
    printf("\t 3 \n");
    printf("\t 4 \n");
    printf("\t 5 \n");
    printf("\t 6 \n");
    printf("\t 7 \n");
    printf("\t 8 \n");
    printf("\t 9 \n");
    printf("\t 10 \n");
    printf("\t 11 \n");
    printf("\t 12 \n");
    printf("Ingresa tu opcion preferdia \n");
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("Estamos en Enero");
        break;
    case 2:
        printf("Estamos en Febrero");
        break;
    case 3:
        printf("Estamos en Marzo");
        break;
    case 4:
        printf("Estamos en Abril");
        break;
    case 5:
        printf("Estamos en Mayo");
        break;
    case 6:
        printf("Estamos en Junio");
        break;
    case 7:
        printf("Estamos en Julio");
        break;
    case 8:
        printf("Estamos en Agosto");
        break;
    case 9:
        printf("Estamos en Septiembre");
        break;
    case 10:
        printf("Estamos en Octubre");
        break;
    case 11:
        printf("Estamos en Noviembre");
        break;
    case 12:
        printf("Estamos en Diciembre");
        break;
    default:
        printf("Error");
        break;
    }
}
