#include<stdio.h>
//Te dice en que dia estamos//
main()
{
    int Dia;
    printf("\t\t Menu de opciones \n\n");
    printf("1 \n");
    printf("2 \n");
    printf("3 \n");
    printf("4 \n");
    printf("5 \n");
    printf("6 \n");
    printf("7 \n");
    printf("Ingresa tu opcion preferdia \n");
    scanf("%d", &Dia);

    switch(Dia)
    {
    case 1:
        printf("Es Lunes");
        break;
    case 2:
        printf("Es Martes");
        break;
    case 3:
        printf("Es Miercoles");
        break;
    case 4:
        printf("Es Jueves");
        break;
    case 5:
        printf("Es Viernes");
        break;
    case 6:
        printf("Es Sabado");
        break;
    case 7:
        printf("Es Domingo");
        break;
    default:
        printf("Error");
        break;
    }
}
